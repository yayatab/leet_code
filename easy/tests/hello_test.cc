#include "../easy_soloutions.h"
#include "gtest/gtest.h"

namespace Easy {
TEST(ExampleTest, BasicAssertion) { EXPECT_EQ(1, 1); }

TEST(EasyTwoSum, Example1) {
  std::vector<int> vector = {2, 7, 11, 15};
  std::vector<int> expected = {0, 1};
  EXPECT_EQ(Solution::towSum(vector, 9), expected);
}

TEST(EasyTwoSum, Example2) {
  std::vector<int> vector = {3, 2, 4};
  std::vector<int> expected = {1, 2};
  EXPECT_EQ(Solution::towSum(vector, 6), expected);
}
} // namespace Easy