/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */

// @lc code=start
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int m = p.size();
        if (s.size() < m)
            return {};
        vector<int> result;
        vector<int> counts(26, 0);
        vector<int> countp(26, 0);
        for (int i = 0; i < m; i++)
        {
            countp[p[i] - 'a']++;
            counts[s[i] - 'a']++;
        }
        if (counts == countp)
            result.push_back(0);
        for (int i = m; i < s.size(); i++)
        {
            counts[s[i] - 'a']++;
            counts[s[i - m] - 'a']--;
            if (counts == countp)
                result.push_back(i - m + 1);
        }
        return result;
    }
};
// @lc code=end
