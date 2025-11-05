#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 2;

    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    if (n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    while (a <= n)
    {
        cout << a << " ";
        a += 2;
    }
    a = 1;
    while (a <= n)
    {
        cout << a << " ";
        a += 2;
    }
}