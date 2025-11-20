/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution
{
public:
    double myPow(double x, int n)
    {
        long long N = n; // avoid INT_MIN overflow
        if (N < 0)
        {
            x = 1 / x;
            N = -N;
        }
        return fastPow(x, N);
    }

    double fastPow(double x, long long n)
    {
        if (n == 0)
            return 1.0;

        double half = fastPow(x, n / 2);

        if (n & 1)
            return half * half * x;
        else
            return half * half;
    }
};
// @lc code=end
