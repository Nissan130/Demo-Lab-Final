#pragma once
#include "CoffeeDecorator.h"

class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(std::shared_ptr<Coffee> coffee) : CoffeeDecorator(coffee) {}

    std::string getDescription() const override {
        return coffee->getDescription() + ", Sugar";
    }

    int getCost() const override {
        return coffee->getCost() + 1;
    }
};
