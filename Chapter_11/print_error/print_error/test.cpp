#include "pch.h"
extern "C" char* get_error(errno_t errnum); // implemented in C source file

namespace {
	TEST(MyTestSuite, MsgTestCase) {
	  EXPECT_STREQ(get_error(ENOMEM), "Not enough space");
	  EXPECT_STREQ(get_error(ENOTSOCK), "Not a socket");
	  EXPECT_STREQ(get_error(EPIPE), "Broken pipe");
	}
} // namespace

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}