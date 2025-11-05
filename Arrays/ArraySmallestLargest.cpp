#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        largest = max(a[i], largest);
        smallest = min(a[i], smallest);
    }
    cout << largest << "\n"
         << smallest;
}