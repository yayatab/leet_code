include(GoogleTest)

add_executable(medium_tests
        medium_tests.cc
        ../medium_soloutions.cc
)

target_link_libraries(medium_tests PRIVATE GTest::gtest_main tools)

gtest_discover_tests(medium_tests)