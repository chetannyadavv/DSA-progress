/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count = 1;
        int index = 1;
        int present = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (present != nums[i])
            {
                nums[count] = nums[i];
                present = nums[i];
                count++;
            }
        }
        return count;
    }
};
// @lc code=end
