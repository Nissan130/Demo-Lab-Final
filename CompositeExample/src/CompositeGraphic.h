#pragma once
#include "Graphic.h"
#include <vector>
#include <memory>
#include <string>

class CompositeGraphic : public Graphic {
private:
    std::vector<std::shared_ptr<Graphic>> children;

public:
    void add(const std::shared_ptr<Graphic>& graphic) {
        children.push_back(graphic);
    }

    std::string draw() const override {
        std::string result = "Composite(";
        for (size_t i = 0; i < children.size(); ++i) {
            result += children[i]->draw();
            if (i != children.size() - 1)
                result += ", ";
        }
        result += ")";
        return result;
    }
};
