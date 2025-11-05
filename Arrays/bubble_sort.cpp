#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int n)
{
    for (int itr = 0; itr < n - 1; itr++)
    {
        for (int i = 0; i <= n - itr - 1; i++)
            if (a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
    }
}
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bubble_sort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}