/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        long long numerator = m + n - 2;
        long long denominator = min(n - 1, m - 1);
        int result = 1;

        for (int i = 1; i <= denominator; i++)
        {

            result = result * numerator / i;
            cout << numerator << " " << i << " " << result << endl;
            numerator--;
        }
        return result;
    }
};
// @lc code=end
