#include <gtest/gtest.h>
#include "../src/ShapeFactory.h"

TEST(ShapeFactoryTest, CreatesCircle) {
    auto shape = ShapeFactory::createShape("circle");
    ASSERT_NE(shape, nullptr);
    EXPECT_EQ(shape->draw(), "Drawing Circle");
}

TEST(ShapeFactoryTest, CreatesSquare) {
    auto shape = ShapeFactory::createShape("square");
    ASSERT_NE(shape, nullptr);
    EXPECT_EQ(shape->draw(), "Drawing Square");
}

TEST(ShapeFactoryTest, ReturnsNullOnUnknownType) {
    auto shape = ShapeFactory::createShape("triangle");
    EXPECT_EQ(shape, nullptr);
}
