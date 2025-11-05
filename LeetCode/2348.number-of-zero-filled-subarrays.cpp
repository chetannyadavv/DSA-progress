/*
 * @lc app=leetcode id=2348 lang=cpp
 *
 * [2348] Number of Zero-Filled Subarrays
 */

// @lc code=start
class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long count = 0;
        long long subarray = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                subarray = subarray + count * (count + 1) / 2;
                count = 0;
            }
            else
                count++;
        }
        subarray = subarray + count * (count + 1) / 2;
        return subarray;
    }
};
// @lc code=end
