/*
 * @lc app=leetcode id=1848 lang=cpp
 *
 * [1848] Minimum Distance to the Target Element
 */

// @lc code=start
class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        int left = -1, right = -1;
        for (int i = start; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                left = i;
                break;
            }
        }
        for (int i = start; i >= 0; i--)
            if (target == nums[i])
            {
                right = i;
                break;
            }
        if (left != -1 and right != -1)
            return min(abs(right - start), abs(left - start));
        if (left == -1)
            return abs(right - start);
        return abs(left - start);
    }
};
// @lc code=end
