#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, S = 0, Sn;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        long long a;
        cin >> a;
        S = S + a;
    }
    Sn = n * (n + 1) / 2;
    cout << Sn - S;
}