#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    char x = a[0];
    int count = 0, max = 0;

    for (auto z : a)
    {
        if (z == x)
            count++;
        else
        {
            max = std::max(max, count);
            count = 1;
            x = z;
        }
    }
    if (count > max)
    {
        cout << count;
        return 0;
    }
    cout << max;
}