#pragma once
#include "Shape.h"

class Square : public Shape {
public:
    std::string draw() override {
        return "Drawing Square";
    }
};
