#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../Project1/DeviceDriver.cpp"
using namespace testing;

// Mock for the FlashMemoryDevice
class FlashMemDeviceMock : public FlashMemoryDevice
{
public:
    unsigned char read(long address)
    {
        int rslt = 0;
        return rslt;
    }
    void write(long address, unsigned char data){}
};

// Fixture usage
class DevDrvFixture : public testing::Test {
public:
    FlashMemDeviceMock* flashMemDevMock = new FlashMemDeviceMock();
};

// Test Read with Mock
TEST_F(DevDrvFixture, Read) {

    DeviceDriver* devDrv = new DeviceDriver(flashMemDevMock);
}

// Read Exception
TEST_F(DevDrvFixture, ReadException)
{
    DeviceDriver* devDrv = new DeviceDriver(flashMemDevMock);
    //EXPECT_THROW(devDrv->read(0xA), std::invalid_argument);
}

// Test Read with Mock
TEST_F(DevDrvFixture, Write) {

    DeviceDriver* devDrv = new DeviceDriver(flashMemDevMock);
}

// Read Exception
TEST_F(DevDrvFixture, WriteException)
{
    DeviceDriver* devDrv = new DeviceDriver(flashMemDevMock);
    //EXPECT_THROW(devDrv->read(0xA), std::invalid_argument);
}

TEST(Mission1, Read) {

}