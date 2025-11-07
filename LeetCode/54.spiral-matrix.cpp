/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> result;

        int left = 0, top = 0, right = matrix[0].size() - 1, bottom = matrix.size() - 1;
        while (left <= right && top <= bottom)
        {
            // Left → Right
            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            top++;

            // Top → Bottom
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            // Right → Left
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }

            // Bottom → Top
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }
        return result;
    }
};
// @lc code=end
