/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int minsum = 1, maxsum = 1, result = INT_MIN;
        for (int num : nums)
        {
            if (num < 0)
                swap(maxsum, minsum);
            maxsum = max(num, maxsum * num);
            minsum = min(num, minsum * num);
            result = max(result, maxsum);
        }
        return result;
    }
};
// @lc code=end
