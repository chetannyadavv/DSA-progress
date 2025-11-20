/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int n = nums.size();
        int target = n - k;
        return quickSelect(nums, 0, n - 1, target);
    }

    int quickSelect(vector<int> &nums, int left, int right, int target)
    {
        while (true)
        {
            int pivot = partition(nums, left, right);
            if (pivot == target)
                return nums[pivot];
            else if (pivot < target)
                left = pivot + 1;
            else
                right = pivot - 1;
        }
    }
    int partition(vector<int> &nums, int left, int right)
    {
        int pivot = nums[right];
        int i = left;
        for (int j = left; j < right; j++)
        {
            if (nums[j] < pivot)
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        swap(nums[i], nums[right]);
        return i;
    }
};
// @lc code=end
