if(EXISTS "/home/md-nissan-ali/Demo-Lab-Final/AdapterExample/build/runTests[1]_tests.cmake")
  include("/home/md-nissan-ali/Demo-Lab-Final/AdapterExample/build/runTests[1]_tests.cmake")
else()
  add_test(runTests_NOT_BUILT runTests_NOT_BUILT)
endif()
