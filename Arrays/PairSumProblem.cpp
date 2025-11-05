#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0;
    int j = n - 1;
    int key;
    cin >> key;
    int k1 = -1;
    int k2 = -1;
    while (i < j)
    {
        if (a[i] + a[j] == key)
        {
            k1 = i;
            k2 = j;
            cout << i << " " << j << endl;
            i = i + 1;
            j = j - 1;
        }
        else if (a[i] + a[j] > key)
            j = j - 1;
        else
            i = i + 1;
    }
    if (k1 == -1)
        cout << "no such pair";
}