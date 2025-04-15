#pragma once
#include "Button.h"

class WinButton : public Button {
public:
    std::string paint() const override {
        return "Windows Button";
    }
};
