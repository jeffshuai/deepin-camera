#include "devmonitorTest.h"

DevmonitorTest::DevmonitorTest()
{
    devmon = new DevNumMonitor();
    devmon->init();
}
TEST_F(DevmonitorTest, start)
{
    devmon->start();
}
//TEST_F(DevmonitorTest, stop)
//{
//    devmon->stop();
//}