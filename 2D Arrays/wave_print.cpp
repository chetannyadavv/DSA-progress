#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    // Wave Print
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
                cout << A[i][j] << " ";
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
                cout
                    << A[i][j] << " ";
        }
    }
}