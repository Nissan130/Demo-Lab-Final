#pragma once
#include <string>

class Checkbox {
public:
    virtual std::string render() const = 0;
    virtual ~Checkbox() = default;
};
