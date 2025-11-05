/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        int water = 0;
        int left = 0, left_max = 0, right = n - 1, right_max = 0;
        while (left < right)
        {
            if (height[left] < height[right])
            {
                if (height[left] > left_max)
                {
                    left_max = height[left];
                }
                else
                {
                    water += left_max - height[left];
                }
                left++;
            }
            else
            {
                if (right_max < height[right])
                    right_max = height[right];
                else
                {
                    water += right_max - height[right];
                }
                right--;
            }
        }
        return water;
    }
};
// @lc code=end
