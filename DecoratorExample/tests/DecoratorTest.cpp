#include <gtest/gtest.h>
#include "../src/SimpleCoffee.h"
#include "../src/MilkDecorator.h"
#include "../src/SugarDecorator.h"

TEST(DecoratorTest, SimpleCoffee) {
    std::shared_ptr<Coffee> coffee = std::make_shared<SimpleCoffee>();
    EXPECT_EQ(coffee->getDescription(), "Simple Coffee");
    EXPECT_EQ(coffee->getCost(), 5);
}

TEST(DecoratorTest, CoffeeWithMilk) {
    std::shared_ptr<Coffee> coffee = std::make_shared<MilkDecorator>(std::make_shared<SimpleCoffee>());
    EXPECT_EQ(coffee->getDescription(), "Simple Coffee, Milk");
    EXPECT_EQ(coffee->getCost(), 7);
}

TEST(DecoratorTest, CoffeeWithMilkAndSugar) {
    std::shared_ptr<Coffee> coffee = std::make_shared<MilkDecorator>(
        std::make_shared<SugarDecorator>(
            std::make_shared<SimpleCoffee>()
        )
    );
    EXPECT_EQ(coffee->getDescription(), "Simple Coffee, Sugar, Milk");
    EXPECT_EQ(coffee->getCost(), 8);
}
