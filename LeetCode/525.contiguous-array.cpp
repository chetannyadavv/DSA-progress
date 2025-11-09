/*
 * @lc app=leetcode id=525 lang=cpp
 *
 * [525] Contiguous Array
 */

// @lc code=start
class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        int maxLen = 0;
        int sum = 0;
        unordered_map<int, int> firstIndex;
        firstIndex[0] = -1; // handles case when prefix itself is balanced

        for (int i = 0; i < n; i++)
        {
            sum += (nums[i] == 0) ? -1 : 1;

            if (firstIndex.find(sum) != firstIndex.end())
            {
                maxLen = max(maxLen, i - firstIndex[sum]);
            }
            else
            {
                firstIndex[sum] = i;
            }
        }

        return maxLen;
    }
};
// @lc code=end
