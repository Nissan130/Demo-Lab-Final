#include <gtest/gtest.h>
#include "../src/MacFactory.h"
#include "../src/WinFactory.h"

TEST(AbstractFactoryTest, CreatesWindowsComponents) {
    WinFactory factory;
    auto button = factory.createButton();
    auto checkbox = factory.createCheckbox();

    EXPECT_EQ(button->paint(), "Windows Button");
    EXPECT_EQ(checkbox->render(), "Windows Checkbox");
}

TEST(AbstractFactoryTest, CreatesMacComponents) {
    MacFactory factory;
    auto button = factory.createButton();
    auto checkbox = factory.createCheckbox();

    EXPECT_EQ(button->paint(), "Mac Button");
    EXPECT_EQ(checkbox->render(), "Mac Checkbox");
}
