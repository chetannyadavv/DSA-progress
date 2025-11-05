#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int no;
    int u = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        u = u ^ no;
    }
}