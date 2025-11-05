#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 2, 2, 1, 1};
    int n = sizeof(A) / sizeof(int);
    int sum[64] = {0};
    for (int i = 0; i < n; i++)
    {
        int no = A[i];
        int j = 0;
        while (no)
        {
            sum[j] += (no & 1);
            j++;
            no = no >> 1;
        }
    }
    int ans = 0;
    int pow = 1;
    for (int i = 0; i < 64; i++)
    {
        sum[i] = sum[i] % 3;
        ans = ans + sum[i] * pow;
        pow = pow * 2;
    }
    cout << ans;
}