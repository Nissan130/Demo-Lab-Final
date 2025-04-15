#pragma once

class NewPrinterInterface {
public:
    virtual void print() = 0;
    virtual ~NewPrinterInterface() = default;
};
