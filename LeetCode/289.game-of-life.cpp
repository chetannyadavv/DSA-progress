/*
 * @lc app=leetcode id=289 lang=cpp
 *
 * [289] Game of Life
 */

// @lc code=start
class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {

        int m = board.size();
        int n = board[0].size();

        vector<pair<int, int>> checker = {
            {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int liveNeighbors = 0;

                for (auto x : checker)
                {
                    int ni = i + x.first;
                    int nj = j + x.second;

                    if (ni >= 0 and nj >= 0 and ni < m and nj < n)
                    {
                        if (abs(board[ni][nj]) == 1)
                            liveNeighbors++;
                    }
                }

                if (board[i][j] == 1 and (liveNeighbors < 2 || liveNeighbors > 3))
                    board[i][j] = -1;
                if (board[i][j] == 0 and liveNeighbors == 3)
                    board[i][j] = 2;
            }
        }

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (board[i][j] == -1)
                    board[i][j] = 0;
                else if (board[i][j] == 2)
                    board[i][j] = 1;
    }
};
// @lc code=end
