#include <bits/stdc++.h>
using namespace std;
int fib(int n, int dp[])
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != 0)
        return dp[n];

    int ans;
    ans = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n] = ans;
}
int main()
{

    return 0;
}