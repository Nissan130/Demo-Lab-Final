#pragma once
#include "Graphic.h"

class Circle : public Graphic {
public:
    std::string draw() const override {
        return "Circle";
    }
};
