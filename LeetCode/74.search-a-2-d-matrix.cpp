/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int i = 0;
        if (matrix.size() > 1)
            for (; i < matrix.size() - 1; i++)
            {
                if (target < matrix[i + 1][0])
                    break;
            }
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (target == matrix[i][j])
                return true;
        }
        return false;
    }
};
// @lc code=end
