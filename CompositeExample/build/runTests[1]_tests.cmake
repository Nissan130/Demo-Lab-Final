add_test([=[CompositeTest.SingleCircle]=]  /home/md-nissan-ali/Demo-Lab-Final/CompositeExample/build/runTests [==[--gtest_filter=CompositeTest.SingleCircle]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[CompositeTest.SingleCircle]=]  PROPERTIES WORKING_DIRECTORY /home/md-nissan-ali/Demo-Lab-Final/CompositeExample/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[CompositeTest.CompositeWithCircles]=]  /home/md-nissan-ali/Demo-Lab-Final/CompositeExample/build/runTests [==[--gtest_filter=CompositeTest.CompositeWithCircles]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[CompositeTest.CompositeWithCircles]=]  PROPERTIES WORKING_DIRECTORY /home/md-nissan-ali/Demo-Lab-Final/CompositeExample/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[CompositeTest.NestedComposites]=]  /home/md-nissan-ali/Demo-Lab-Final/CompositeExample/build/runTests [==[--gtest_filter=CompositeTest.NestedComposites]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[CompositeTest.NestedComposites]=]  PROPERTIES WORKING_DIRECTORY /home/md-nissan-ali/Demo-Lab-Final/CompositeExample/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  runTests_TESTS CompositeTest.SingleCircle CompositeTest.CompositeWithCircles CompositeTest.NestedComposites)
