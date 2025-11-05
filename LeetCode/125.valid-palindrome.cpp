/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            // Skip non-alphanumeric chars from left
            while (i < j && !isalnum(s[i]))
                i++;
            // Skip non-alphanumeric chars from right
            while (i < j && !isalnum(s[j]))
                j--;

            // Compare lowercase versions
            if (tolower(s[i]) != tolower(s[j]))
                return false;

            i++;
            j--;
        }

        return true;
    }
};

// @lc code=end
