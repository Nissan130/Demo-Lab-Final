#pragma once
#include <string>

class Button {
public:
    virtual std::string paint() const = 0;
    virtual ~Button() = default;
};
