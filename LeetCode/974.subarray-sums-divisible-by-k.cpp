/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1;
        int currSum = 0;
        int count = 0;
        for (int num : nums)
        {
            currSum = currSum + num;
            int rem = ((currSum % k) + k) % k;
            if (prefixCount.find(rem) != prefixCount.end())
                count += prefixCount[rem];
            prefixCount[rem]++;
        }
        return count;
    }
};
// @lc code=end
