#include "../medium_soloutions.h"
#include "gtest/gtest.h"

namespace medium {
TEST(MediumTwoSum, Example1) {
  std::vector<int> vector = {2, 7, 11, 15};
  std::vector<int> expected = {0, 1};
  EXPECT_EQ(Solution::threeSum(vector, 9), expected);
}

TEST(MediumTwoSum, Example2) {
  std::vector<int> vector = {3, 2, 4};
  std::vector<int> expected = {1, 2};
  EXPECT_EQ(Solution::threeSum(vector, 6), expected);
}
} // namespace Easy