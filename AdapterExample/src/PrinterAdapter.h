#pragma once
#include "OldPrinter.h"
#include "NewPrinterInterface.h"

class PrinterAdapter : public NewPrinterInterface {
private:
    OldPrinter* oldPrinter;

public:
    PrinterAdapter(OldPrinter* printer) : oldPrinter(printer) {}

    void print() override {
        oldPrinter->oldPrint(); // adapting
    }
};
