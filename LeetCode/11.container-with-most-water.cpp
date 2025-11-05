/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int high = 0;
        while (left < right)
        {
            int low = min(height[left], height[right]);
            int present = (right - left) * low;
            high = max(present, high);
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return high;
    }
};
// @lc code=end
