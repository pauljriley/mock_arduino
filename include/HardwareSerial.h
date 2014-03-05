#ifndef HardwareSerial_h
#define HardwareSerial_h

#include "HardwareSerial.h"
#include <gmock/gmock.h>

struct ring_buffer;

class HardwareSerialMock : public HardwareSerial {
public:
  HardwareSerial(ring_buffer *rx_buffer, ring_buffer *tx_buffer,
    volatile uint8_t *ubrrh, volatile uint8_t *ubrrl,
    volatile uint8_t *ucsra, volatile uint8_t *ucsrb,
    volatile uint8_t *ucsrc, volatile uint8_t *udr,
    uint8_t rxen, uint8_t txen, uint8_t rxcie, uint8_t udrie, uint8_t u2x);
  MOCK_METHOD1(begin, void(unsigned long));
  MOCK_METHOD2(begin, void(unsigned long, unit8_t));
  MOCK_METHOD0(end, void(void));
  MOCK_METHOD0(available, int(void));
  MOCK_METHOD0(peek, int(void)); 
  MOCK_METHOD0(read, int(void));
  MOCK_METHOD0(flush, void(void));
  MOCK_METHOD1(write, size_t(uint8_t));
};

#endif // HardwareSerial_h
