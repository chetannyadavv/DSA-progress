#include <bits/stdc++.h>
using namespace std;
int find(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + e >> 1;
        if (a[mid] == key)
            return mid;
        else if (a[s] <= a[mid])
        {
            if (key > a[s] and key < a[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }
        else
        {
            if (key > a[mid] and key < a[e])
                s = mid + 1;
            else
                e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int A[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    int key;
    cin >> key;
}