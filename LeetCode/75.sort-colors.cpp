/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int left = 0, mid = 0, right = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[mid] == 0)
            {
                swap(nums[left], nums[mid]);
                mid++;
                left++;
            }
            else if (nums[mid] == 1)
                mid++;
            else
            {
                swap(nums[mid], nums[right]);
                right--;
            }
        }
    }
};
// @lc code=end
