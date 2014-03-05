#include "HardwareSerialMock.h"

using ::testing::Return;

class HardwareSerialTest : public ::testing::Test {
	public:
		HardwareSerialTest() {
		};
};

TEST_F(HardwareSerialTest, Call_begin_Successful) {
	HardwareSerialMock mock;
}