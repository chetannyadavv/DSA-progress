/*
 * @lc app=leetcode id=260 lang=cpp
 *
 * [260] Single Number III
 */

// @lc code=start
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> anss;
        int ans = 0;
        for (auto i : nums)
            ans = ans ^ i;
        int Index = 0;
        int anscopy = ans;
        while (ans)
        {
            if (ans & 1)
                break;
            ans = ans >> 1;
            Index++;
        }
        int ans2 = 0;
        for (auto i : nums)
            if ((i >> Index) & 1)
                ans2 = ans2 ^ i;
        anss.push_back(ans2);
        ans = anscopy ^ ans2;
        anss.push_back(ans);
        return anss;
    }
};
// @lc code=end
