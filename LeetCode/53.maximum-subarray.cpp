/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maximum_sum = nums[0];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
            maximum_sum = max(maximum_sum, sum);
            if (sum < 0)
                sum = 0;
        }
        return maximum_sum;
    }
};
// @lc code=end
