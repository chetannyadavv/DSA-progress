/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int first = INT_MAX, second = INT_MAX;
        for (int num : nums)
        {
            if (num <= first)
            {
                first = num; // smallest so far
            }
            else if (num <= second)
            {
                second = num; // second smallest
            }
            else
            {
                return true; // found a number bigger than both
            }
        }
        return false;
    }
};

// @lc code=end
