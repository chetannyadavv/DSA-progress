/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for (int i = 1; i < n; i++)
        {
            vector<int> &last = result.back();
            vector<int> &curr = intervals[i];
            if (curr[0] <= last[1])
                last[1] = max(last[1], curr[1]);
            else
                result.push_back(curr);
        }
        return result;
    }
};
// @lc code=end
