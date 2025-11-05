/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution
{
public:
    int reverseBits(int n)
    {
        int result = 0;
        for (int i = 0; i < 32; i++)
        {
            result <<= 1;      // Shift result left to make space
            result |= (n & 1); // Add the least significant bit of n
            n >>= 1;           // Shift n right to process next bit
        }
        return result;
    }
};
// @lc code=end
