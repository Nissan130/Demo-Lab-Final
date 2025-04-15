#include "gtest/gtest.h"
#include "../src/OldPrinter.h"
#include "../src/PrinterAdapter.h"
#include "../src/NewPrinterInterface.h"

#include <sstream>
#include <iostream>

TEST(PrinterAdapterTest, AdapterPrintsUsingOldPrinter) {
    OldPrinter oldPrinter;
    PrinterAdapter adapter(&oldPrinter);

    // Redirect stdout
    std::stringstream buffer;
    std::streambuf* oldCout = std::cout.rdbuf(buffer.rdbuf());

    adapter.print();

    // Restore stdout
    std::cout.rdbuf(oldCout);

    EXPECT_EQ(buffer.str(), "Printing using OldPrinter\n");
}

