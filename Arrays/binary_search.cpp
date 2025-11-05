#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int key;
    cout << "Enter element you want to search : ";
    cin >> key;
    cout << binary_search(a, n, key);
}