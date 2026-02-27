#pragma once
#include <vector>

namespace medium
{
    class Solution
    {
    public:
        static std::vector<std::vector<int>> threeSum(std::vector<int> &nums);

        static int lengthOfLongestSubstring(const std::string &input);

        static std::string longestPalindrome(const std::string &input);
    };
}