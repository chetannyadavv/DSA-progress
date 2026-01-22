/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                long long need = (long long)target - nums[i] - nums[j];
                int left = j + 1;
                int right = n - 1;
                while (left < right)
                {
                    int sum = nums[left] + nums[right];
                    if (sum < need)
                        left++;
                    else if (sum > need)
                        right--;
                    else
                    {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                        int x = nums[left], y = nums[right];
                        while (left < right && nums[left] == x)
                            left++;
                        while (left < right && nums[right] == y)
                            right--;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end
