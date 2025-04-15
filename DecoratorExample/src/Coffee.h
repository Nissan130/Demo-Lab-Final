#pragma once
#include <string>

class Coffee {
public:
    virtual std::string getDescription() const = 0;
    virtual int getCost() const = 0;
    virtual ~Coffee() = default;
};
