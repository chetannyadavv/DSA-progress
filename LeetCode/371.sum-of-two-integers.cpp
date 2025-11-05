/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */

// @lc code=start
class Solution
{
public:
    int getSum(int a, int b)
    {
        int carry = 0;
        while (b != 0)
        {
            carry = (a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
        }
};
// @lc code=end
