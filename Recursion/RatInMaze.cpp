#include <iostream>
using namespace std;

bool ratInMaze(char maze[10][10], int sol[][10], int i, int j, int m, int n)
{

    if (i == m and j == n)
    {
        sol[m][n] = 1;

        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }

    if (i > m || j > n)
    {
        return false;
    }
    if (maze[i][j] == 'X')
    {
        return false;
    }

    sol[i][j] = 1;

    bool rightSuccess = ratInMaze(maze, sol, i, j + 1, m, n);
    bool leftSuccess = ratInMaze(maze, sol, i + 1, j, m, n);

    if (rightSuccess or leftSuccess)
        return true;

    sol[i][j] = 0;

    return false;
}

int main()
{
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00"};
    int sol[10][10] = {0};

    ratInMaze(maze, sol, 0, 0, 3, 3);

    return 0;
}