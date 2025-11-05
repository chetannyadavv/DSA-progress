#include <bits/stdc++.h>
using namespace std;
int first_occurence(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ans;
}
int last_occurence(int a[], int n; int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 8, 8, 8, 8, 9, 10, 11};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    return 0;
}