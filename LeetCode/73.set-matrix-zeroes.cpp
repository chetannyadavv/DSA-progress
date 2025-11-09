/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        bool zeroFirstRow = false, zeroFirstCol = false;

        // Check first column
        for (int i = 0; i < m; ++i)
            if (matrix[i][0] == 0)
            {
                zeroFirstCol = true;
                break;
            }

        // Check first row
        for (int j = 0; j < n; ++j)
            if (matrix[0][j] == 0)
            {
                zeroFirstRow = true;
                break;
            }

        // Use first row/col as markers
        for (int i = 1; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Zero cells based on markers
        for (int i = 1; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        // First column
        if (zeroFirstCol)
        {
            for (int i = 0; i < m; ++i)
                matrix[i][0] = 0;
        }
        // First row
        if (zeroFirstRow)
        {
            for (int j = 0; j < n; ++j)
                matrix[0][j] = 0;
        }
    }
};
// @lc code=end
