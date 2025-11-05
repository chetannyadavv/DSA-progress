#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin >> n;
    vector<long long> a;
    while (n--)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    long long moves = 0;

    long long max = a[0];
    for (auto z : a)
    {
        if (z > max)
            max = z;
        moves = moves + (max - z);
    }
    cout << moves;
}