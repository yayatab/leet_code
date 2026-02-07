include(GoogleTest)

add_executable(hello_test
        hello_test.cc
        ../easy_soloutions.cc
        ../easy_soloutions.h
)

target_link_libraries(hello_test PRIVATE GTest::gtest_main tools)

gtest_discover_tests(hello_test)