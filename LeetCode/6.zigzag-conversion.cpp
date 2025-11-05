/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s; // edge case

        vector<string> A(numRows, ""); // use vector instead of VLA
        int row = 0, dir = 1;          // start at row 0, moving down

        for (char c : s)
        {
            A[row] += c;
            row += dir;
            if (row == numRows - 1)
                dir = -1; // reached bottom, go up
            else if (row == 0)
                dir = 1; // reached top, go down
        }

        string result = "";
        for (string &line : A)
            result += line;

        return result;
    }
};
// @lc code=end
