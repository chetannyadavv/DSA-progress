#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, key;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element to search ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << endl
                 << i;
            break;
        }
    }
    return 0;
}