/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        std::reverse(nums.begin(), nums.begin() + nums.size());
        std::reverse(nums.begin(), nums.begin() + k);
        std::reverse(nums.begin() + k, nums.begin() + nums.size());
    }
};
// @lc code=end
