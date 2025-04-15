#pragma once
#include <string>

class Shape {
public:
    virtual std::string draw() = 0;
    virtual ~Shape() = default;
};
