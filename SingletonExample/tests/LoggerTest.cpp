#include <gtest/gtest.h>
#include "../src/Logger.h"

TEST(SingletonTest, LoggerStoresLog) {
    Logger* logger = Logger::getInstance();
    logger->addLog("First Message");

    EXPECT_NE(logger->getLog().find("First Message"), std::string::npos);
}

TEST(SingletonTest, LoggerIsSingleton) {
    Logger* logger1 = Logger::getInstance();
    Logger* logger2 = Logger::getInstance();

    EXPECT_EQ(logger1, logger2); // should be the same instance
}
