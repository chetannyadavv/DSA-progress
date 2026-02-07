/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.empty())
            return 0;

        vector<int> last(256, -1); // last seen index of each char
        int left = 0;              // start of sliding window
        int longest = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            // If we've seen this char inside the current window,
            // move left boundary right after its previous index
            if (last[c] >= left)
            {
                left = last[c] + 1;
            }

            last[c] = i; // update last seen index
            longest = max(longest, i - left + 1);
        }

        return longest;
    }
};
// @lc code=end
