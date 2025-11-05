/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int n = nums.size();
        double currentSum = 0;

        // Calculate sum of first k elements
        for (int i = 0; i < k; i++)
            currentSum += nums[i];

        double maxSum = currentSum;

        // Slide the window
        for (int i = k; i < n; i++)
        {
            currentSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum / k;
    }
};
// @lc code=end
