#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        long long max = std::max(x, y);
        long long value = (max * max) - (max - 1);
        if (max % 2 == 0)
        {
            if (x > y)
                value = value + (x - y);
            else
                value = value - (y - x);
        }
        else
        {
            if (x > y)
                value = value - (x - y);
            else
                value = value + (y - x);
        }
        cout << value << endl;
    }
}