add_test([=[PrinterAdapterTest.AdapterPrintsUsingOldPrinter]=]  /home/md-nissan-ali/Demo-Lab-Final/AdapterExample/build/runTests [==[--gtest_filter=PrinterAdapterTest.AdapterPrintsUsingOldPrinter]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[PrinterAdapterTest.AdapterPrintsUsingOldPrinter]=]  PROPERTIES WORKING_DIRECTORY /home/md-nissan-ali/Demo-Lab-Final/AdapterExample/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  runTests_TESTS PrinterAdapterTest.AdapterPrintsUsingOldPrinter)
