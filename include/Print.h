#ifndef Print_h
#define Print_h

#include "Print.h"
#include <gmock/gmock.h>

class PrintMock : public Print
{
  protected:
    MOCK_METHOD1(setWriteError, void(int));

  public:
    Print();
  
    MOCK_METHOD0(getWriteError, int(void));
    MOCK_METHOD0(clearWriteError, void();
    MOCK_METHOD1(write, size_t(uint8_t));
    MOCK_METHOD1(write, size_t(const char *));
    MOCK_METHOD1(write, size_t(const uint8_t *, size_t));
    
    MOCK_METHOD1(print, size_t(const __FlashStringHelper *));
    MOCK_METHOD1(print, size_t(const String &);
    MOCK_METHOD1(print, size_t(const char[]);
    MOCK_METHOD1(print, size_t(char);
    MOCK_METHOD1(print, size_t(unsigned char, int));
    MOCK_METHOD1(print, size_t(int, int));
    MOCK_METHOD1(print, size_t(unsigned int, int));
    MOCK_METHOD1(print, size_t(long, int));
    MOCK_METHOD1(print, size_t(unsigned long, int));
    MOCK_METHOD1(print, size_t(double, int));
    MOCK_METHOD1(print, size_t(const Printable&));

    MOCK_METHOD1(println, size_t(const __FlashStringHelper *));
    MOCK_METHOD1(println, size_t(const String &));
    MOCK_METHOD1(println, size_t(const char[]));
    MOCK_METHOD1(println, size_t(char));
    MOCK_METHOD1(println, size_t(unsigned char, int));
    MOCK_METHOD1(println, size_t(int, int));
    MOCK_METHOD1(println, size_t(unsigned int, int));
    MOCK_METHOD1(println, size_t(long, int));
    MOCK_METHOD1(println, size_t(unsigned long, int));
    MOCK_METHOD1(println, size_t(double, int));
    MOCK_METHOD1(println, size_t(const Printable&));
    MOCK_METHOD1(println, size_t(void));
};

#endif
