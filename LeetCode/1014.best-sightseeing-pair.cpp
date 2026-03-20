/*
 * @lc app=leetcode id=1014 lang=cpp
 *
 * [1014] Best Sightseeing Pair
 */

// @lc code=start
class Solution
{
public:
    int maxScoreSightseeingPair(vector<int> &values)
    {
        int best = values[0];
        int maxAns = INT_MIN;
        for (int i = 1; i < values.size(); i++)
        {
            int currentAns = best + values[i] - i;
            best = max(best, values[i] + i);
            maxAns = max(maxAns, currentAns);
        }
        return maxAns;
    }
};
// @lc code=end
