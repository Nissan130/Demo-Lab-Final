#pragma once
#include <memory>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(const std::string& type) {
        if (type == "circle") {
            return std::make_unique<Circle>();
        } else if (type == "square") {
            return std::make_unique<Square>();
        }
        return nullptr;
    }
};
