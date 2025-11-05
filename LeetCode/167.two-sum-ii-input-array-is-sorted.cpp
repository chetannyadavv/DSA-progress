/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int o = 0;
        int p = numbers.size() - 1;
        int sum = 0;
        while (o < p)
        {
            sum = numbers[o] + numbers[p];
            if (sum == target)
                return {o + 1, p + 1};
            else if (sum > target)
                p--;
            else
                o++;
        }
        return {};
    }
};
// @lc code=end
