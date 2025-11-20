/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> result;
        int cand1 = 0;
        int cand2 = 0;
        int count1 = 0;
        int count2 = 0;
        for (int i : nums)
        {
            if (cand1 == i)
                count1++;
            else if (cand2 == i)
                count2++;
            else if (count1 == 0)
            {
                cand1 = i;
                count1++;
            }
            else if (count2 == 0)
            {
                cand2 = i;
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for (int i : nums)
        {
            if (i == cand1)
                count1++;
            if (i == cand2)
                count2++;
        }
        if (cand1 == cand2)
        {
            result.push_back(cand1);
            return result;
        }
        if (count1 > nums.size() / 3)
            result.push_back(cand1);
        if (count2 > nums.size() / 3)
            result.push_back(cand2);
        return result;
    }
};
// @lc code=end
