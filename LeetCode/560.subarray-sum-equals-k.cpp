/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> prefixCount;
        int count = 0;
        prefixCount[0] = 1;
        int currSum = 0;
        for (int num : nums)
        {
            currSum += num;
            if (prefixCount.find(currSum - k) != prefixCount.end())
                count += prefixCount[currSum - k];
            prefixCount[currSum]++;
        }
        return count;
    }
};
// @lc code=end
