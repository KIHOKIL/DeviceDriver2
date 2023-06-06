### 안녕하세요. Device Driver 개발 페이지입니다.

---

- Read implement
- Read Exception
- Write implement
- Write Exception

'''cpp
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../Project128/DeviceDriver.cpp"
#include "../Project128/app.cpp"

using namespace std;
using namespace testing;

class MockDevice : public FlashMemoryDevice {
public:
	MOCK_METHOD(unsigned char, read, (long address), (override));
	MOCK_METHOD(void, write, (long address, unsigned char data), (override));
};

'''
