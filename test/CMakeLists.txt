find_package(GTest CONFIG REQUIRED)

add_executable(main_test main_test.cpp)
add_test(MainTest main_test)

target_link_libraries(main_test
  PRIVATE
  GTest::gtest
  GTest::gtest_main
  GTest::gmock
  GTest::gmock_main)
