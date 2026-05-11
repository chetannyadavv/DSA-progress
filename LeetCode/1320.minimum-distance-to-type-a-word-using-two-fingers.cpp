/*
 * @lc app=leetcode id=1320 lang=cpp
 *
 * [1320] Minimum Distance to Type a Word Using Two Fingers
 */

// @lc code=start
class Solution
{
public:
    int memo[300][27];

    int distance(int a, int b)
    {
        if (a == 26)
            return 0;
        return abs(a / 6 - b / 6) + abs(a % 6 - b % 6);
    }
    int solve(int i, int j, string &word)
    {
        if (i == word.size())
            return 0;
        if (memo[i][j] != -1)
            return memo[i][j];
        int opt1 = distance(word[i - 1] - 'A', word[i] - 'A') + solve(i + 1, j, word);
        int opt2 = distance(j, word[i] - 'A') + solve(i + 1, word[i - 1] - 'A', word);

        return memo[i][j] = min(opt1, opt2);
    }
    int minimumDistance(string word)
    {
        memset(memo, -1, sizeof(memo));
        return solve(1, 26, word);
    }
};
// @lc code=end
