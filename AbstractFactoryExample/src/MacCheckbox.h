#pragma once
#include "Checkbox.h"

class MacCheckbox : public Checkbox {
public:
    std::string render() const override {
        return "Mac Checkbox";
    }
};
