#ifndef ArduinoMock_h
#define ArduinoMock_h

#include "Arduino.h"

class ArduinoMock {
public:
	MOCK_METHOD2(init, void(void));

	MOCK_METHOD2(pinMode, void(uint8_t, uint8_t));
	MOCK_METHOD2(digitalWrite, void(uint8_t, uint8_t));
	MOCK_METHOD2(digitalRead, int(uint8_t));
	MOCK_METHOD2(analogRead, int(uint8_t));
	MOCK_METHOD2(analogReference, void(uint8_t));
	MOCK_METHOD2(analogWrite, void(uint8_t, int));

	MOCK_METHOD2(millis, unsigned long(void));
	MOCK_METHOD2(micros, unsigned long(void));
	MOCK_METHOD2(delay, void(unsigned long));
	MOCK_METHOD2(delayMicroseconds, void(unsigned int));
	MOCK_METHOD2(pulseIn, unsigned long(uint8_t, uint8_t, unsigned long));

	MOCK_METHOD2(shiftOut, void(uint8_t, uint8_t, uint8_t, uint8_t));
	MOCK_METHOD2(shiftIn, uint8_t(uint8_t, uint8_t, uint8_t));

	MOCK_METHOD2(attachInterrupt, void(uint8_t, void (*)(void), int));
	MOCK_METHOD2(detachInterrupt, void(uint8_t));

	MOCK_METHOD2(setup, void(void));
	MOCK_METHOD2(loop, void(void));
};

#endif // ArduinoMock_h
