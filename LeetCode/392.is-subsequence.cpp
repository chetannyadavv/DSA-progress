/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.empty())
            return true; // ✅ empty string is always a subsequence
        int j = 0;
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == s[j])
            {
                j++;
                if (j == s.length())
                    return true;
            }
        }
        return false;
    }
};

;
// @lc code=end
