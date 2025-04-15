#include <gtest/gtest.h>
#include "../src/Circle.h"
#include "../src/CompositeGraphic.h"

TEST(CompositeTest, SingleCircle) {
    Circle circle;
    EXPECT_EQ(circle.draw(), "Circle");
}

TEST(CompositeTest, CompositeWithCircles) {
    auto composite = std::make_shared<CompositeGraphic>();
    composite->add(std::make_shared<Circle>());
    composite->add(std::make_shared<Circle>());

    EXPECT_EQ(composite->draw(), "Composite(Circle, Circle)");
}

TEST(CompositeTest, NestedComposites) {
    auto composite1 = std::make_shared<CompositeGraphic>();
    composite1->add(std::make_shared<Circle>());

    auto composite2 = std::make_shared<CompositeGraphic>();
    composite2->add(std::make_shared<Circle>());
    composite2->add(composite1);

    EXPECT_EQ(composite2->draw(), "Composite(Circle, Composite(Circle))");
}
