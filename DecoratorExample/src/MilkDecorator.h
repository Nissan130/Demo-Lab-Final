#pragma once
#include "CoffeeDecorator.h"

class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(std::shared_ptr<Coffee> coffee) : CoffeeDecorator(coffee) {}

    std::string getDescription() const override {
        return coffee->getDescription() + ", Milk";
    }

    int getCost() const override {
        return coffee->getCost() + 2;
    }
};
