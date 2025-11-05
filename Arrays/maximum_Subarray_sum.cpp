#include <bits/stdc++.h>
using namespace std;
int main()
{
    int left = 0, right = 0;
    int a[1000] = {0};
    int b[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    a[0] = b[0];
    for (int i = 1; i < n; i++)
        a[i] = b[i] + a[i - 1];
    int maximum_sum = a[0];
    int current_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == 0)
                current_sum = a[j];
            else
                current_sum = a[j] - a[i - 1];
            // cout << current_sum << " ";
            if (current_sum > maximum_sum)
            {
                maximum_sum = current_sum;
                left = i;
                right = j;
            }
        }
        // cout << endl;
    }
    cout << maximum_sum << endl;

    while (left <= right)
    {
        cout << b[left] << " ";
        left++;
    }
}