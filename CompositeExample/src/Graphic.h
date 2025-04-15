#pragma once
#include <string>

class Graphic {
public:
    virtual std::string draw() const = 0;
    virtual ~Graphic() = default;
};
