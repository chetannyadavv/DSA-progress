/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution
{
public:
    bool isHappy(int n)
    {
        int slow = n;
        int fast = sum(n);
        while (slow != fast && fast != 1)
        {
            slow = sum(slow);
            fast = sum(sum(fast));
        }
        return fast == 1;
    }

private:
    int sum(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            sum = sum + digit * digit;
            n = n / 10;
        }
        return sum;
    }
};
// @lc code=end
