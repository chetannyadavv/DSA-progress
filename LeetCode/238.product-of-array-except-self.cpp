/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> answer(n, 1);

        // Step 1: Compute prefix products
        int prefix = 1;
        for (int i = 0; i < n; i++)
        {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        // Step 2: Compute suffix products and multiply
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;
    }
};
// @lc code=end
