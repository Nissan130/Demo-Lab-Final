#pragma once
#include "Checkbox.h"

class WinCheckbox : public Checkbox {
public:
    std::string render() const override {
        return "Windows Checkbox";
    }
};
