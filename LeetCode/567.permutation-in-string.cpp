/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int m = s1.size();
        if (s2.size() < m)
            return false;
        vector<int> countp(26, 0);
        vector<int> counts(26, 0);
        for (int i = 0; i < m; i++)
        {
            countp[s1[i] - 'a']++;
            counts[s2[i] - 'a']++;
        }
        if (counts == countp)
            return true;
        for (int i = m; i < s2.size(); i++)
        {
            counts[s2[i] - 'a']++;
            counts[s2[i - m] - 'a']--;
            if (counts == countp)
                return true;
        }
        return false;
    }
};
// @lc code=end
