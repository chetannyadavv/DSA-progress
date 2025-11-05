/*
 * @lc app=leetcode id=918 lang=cpp
 *
 * [918] Maximum Sum Circular Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubarraySumCircular(vector<int> &nums)
    {
        int total = 0, currentMax = 0, maxSum = nums[0], currentMin = 0, minSum = nums[0];
        for (int num : nums)
        {
            total += num;
            currentMax = max(num, currentMax + num);
            maxSum = max(currentMax, maxSum);
            currentMin = min(num, currentMin + num);
            minSum = min(currentMin, minSum);
        }
        if (maxSum < 0)
            return maxSum;
        return max(maxSum, total - minSum);
    }
};
// @lc code=end
