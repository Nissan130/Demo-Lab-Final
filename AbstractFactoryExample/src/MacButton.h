#pragma once
#include "Button.h"

class MacButton : public Button {
public:
    std::string paint() const override {
        return "Mac Button";
    }
};
