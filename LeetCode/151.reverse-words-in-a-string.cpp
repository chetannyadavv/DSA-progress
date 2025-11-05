/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.size();
        int i = 0, j = 0;
        while (i < n and s[i] == ' ')
            i++;
        while (i < n)
        {
            if (s[i] != ' ')
                s[j++] = s[i++];
            else
            {
                s[j++] = ' ';
                while (i < n and s[i] == ' ')
                    i++;
            }
        }
        if (j > 0 && s[j - 1] == ' ')
            j--;
        s.resize(j);
        reverse(s.begin(), s.end());
        int start = 0;
        for (int end = 0; end <= s.size(); end++)
        {
            if (end == s.size() || s[end] == ' ')
            {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        };
        return s;
    }
};
// @lc code=end
