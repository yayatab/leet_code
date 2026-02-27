#include "medium_soloutions.h"

#include "tools/printing_tools.h"
#include <iostream>
#include <map>

#include <algorithm>
#include <unordered_map>

namespace medium {

std::vector<std::vector<int>> Solution::threeSum(std::vector<int> &nums) {
  std::ranges::sort(nums);
  std::vector<std::vector<int>> res;

  const int n = nums.size();
  if (n < 3) {
    return res;
  }

  for (int i = 0; i < n - 2; ++i) {
    int a = nums[i];
    if (i > 0 && a == nums[i - 1]) {
      continue;
    }
    if (a > 0) {
      break;
    }

    int minSum = a + nums[i + 1] + nums[i + 2];

    if (minSum > 0) {
      break;
    }

    int maxSum = a + nums[n - 2] + nums[n - 1];

    if (maxSum < 0) {
      continue;
    }

    int l = i + 1, r = n - 1;
    while (l < r) {
      long sum = (long)a + nums[l] + nums[r];
      if (sum < 0) {
        int lv = nums[l];
        do {
          ++l;
        } while (l < r && nums[l] == lv);
      } else if (sum > 0) {
        int rv = nums[r];
        do {
          --r;
        } while (l < r && nums[r] == rv);
      } else {
        res.push_back({a, nums[l], nums[r]});
        int lv = nums[l], rv = nums[r];
        do {
          ++l;
        } while (l < r && nums[l] == lv);
        do {
          --r;
        } while (l < r && nums[r] == rv);
      }
    }
  }
  return res;
} // shamelessly vibecoded.


int Solution::lengthOfLongestSubstring(const std::string &input) {
  std::array<bool, 128> chars{};
  int max_count = 0;
  int count = 0;
  for (auto &c : input) {
    if (chars[static_cast<int>(c)] == false) {
      chars[static_cast<int>(c)] = true;
      count++;
    } else {
      if (count >= max_count) {
          max_count = count;
      }
      count = 0;
      chars.fill(false);
    }

  }
  return max_count;
}



std::string Solution::longestPalindrome(const std::string &input) {

}

} // namespace medium
