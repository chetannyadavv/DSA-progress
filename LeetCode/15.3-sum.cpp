/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> result;
        int left;
        int right;
        sort(nums.begin(), nums.end());
        int sum;
        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && (nums[i] == nums[i - 1]))
                continue;
            left = i + 1;
            right = n - 1;
            while (left < right)
            {
                sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                }
                else if (sum < 0)
                    left++;
                else
                    right--;
            }
        }
        return result;
    }
};
// @lc code=end
