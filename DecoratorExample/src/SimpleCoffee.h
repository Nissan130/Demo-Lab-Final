#pragma once
#include "Coffee.h"

class SimpleCoffee : public Coffee {
public:
    std::string getDescription() const override {
        return "Simple Coffee";
    }

    int getCost() const override {
        return 5;
    }
};
