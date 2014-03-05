#ifndef StreamMock_h
#define StreamMock_h

#include "Stream.h"
#include <gmock/gmock.h>

class StreamMock: public Stream {
  public:
    StreamMock();
    ~StreamMock();

    MOCK_METHOD0(available, int(void));
    MOCK_METHOD0(read, int(void));
    MOCK_METHOD0(peek, int(void));
    MOCK_METHOD0(flush, void(void));
    MOCK_METHOD1(setTimeout, void(unsigned long));
    MOCK_METHOD1(find, bool(char*));
    MOCK_METHOD2(find, bool(char*, size_t));
    MOCK_METHOD2(findUntil, bool(char *, char *));
    MOCK_METHOD4(findUntil, bool(char*, size_t, char*, size_t));
    MOCK_METHOD0(parseInt, long(void)); 
    MOCK_METHOD0(parseFloat, float(void)); 
    MOCK_METHOD2(readBytes, size_t(char*, size_t));
    MOCK_METHOD3(readBytesUntil, size_t(char, char*, size_t));
    MOCK_METHOD0(readString, String(void));
    MOCK_METHOD1(readStringUntil, String(char));
};

#endif // StreamMock_h
