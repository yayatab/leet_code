#include "easy_soloutions.h"

#include "tools/printing_tools.h"
#include <iostream>
#include <map>

#include <unordered_map>

namespace Easy {
std::vector<int> Solution::towSum(std::vector<int> &nums, int target) {
  std::unordered_map<int, int> seen;
  for (int i = 0; i < nums.size(); ++i) {
    int x = nums[i];
    if (auto it = seen.find(target - x); it != seen.end())
      return {it->second, i};
    seen[x] = i;
  }
  return {};
}
} // namespace Easy
