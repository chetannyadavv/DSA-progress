/*
 * @lc app=leetcode id=523 lang=cpp
 *
 * [523] Continuous Subarray Sum
 */

// @lc code=start
class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n < 2)
            return false;
        if (k == 0)
        {
            for (int i = 1; i < n; i++)
                if (nums[i] == 0 && nums[i - 1] == 0)
                    return true;
            return false;
        }
        long long sum = 0;
        unordered_map<int, int> check;
        check.reserve(2 * n);
        check[0] = -1;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            int r = (int)((sum % k + (long long)k) % k);
            auto it = check.find(r);
            if (it != check.end())
            {
                if (i - it->second >= 2)
                    return true;
            }
            else
                check[r] = i;
        }
        return false;
    }
};
// @lc code=end
