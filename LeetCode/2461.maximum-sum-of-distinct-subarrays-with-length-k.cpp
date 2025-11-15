/*
 * @lc app=leetcode id=2461 lang=cpp
 *
 * [2461] Maximum Sum of Distinct Subarrays With Length K
 */

// @lc code=start
class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        long long currSum = 0, maxSum = 0;
        unordered_map<int, int> freq;

        for (int i = 0; i < k && i < nums.size(); i++)
        {
            currSum += nums[i];
            freq[nums[i]]++;
        }

        if (freq.size() == k)
            maxSum = currSum;

        for (int i = k; i < nums.size(); i++)
        {
            currSum += nums[i] - nums[i - k];

            // Remove outgoing element
            if (--freq[nums[i - k]] == 0)
                freq.erase(nums[i - k]);

            // Add incoming element
            freq[nums[i]]++;

            if (freq.size() == k)
                maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};
// @lc code=end
