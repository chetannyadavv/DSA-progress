#include <bits./stdc++.h>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 1, 3, 5, 4};
    int n = sizeof(A) / sizeof(int);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ A[i];
    }
    int Index = 0;
    while (ans)
    {
        if (ans & 1 == 1)
            break;
        Index++;
        ans = ans >> 1;
    }
    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((A[i] >> Index) & 1 == 1)
            ans2 = ans2 ^ A[i];
    }
    cout << ans2 << endl;
    cout << (ans ^ ans2);
}