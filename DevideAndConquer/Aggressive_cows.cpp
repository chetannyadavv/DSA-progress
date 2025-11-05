#include <bits/stdc++.h>
using namespace std;
bool cowsCheck(int space, int stalls[], int n, int c)
{
    int last_cow = stalls[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last_cow >= space)
        {
            last_cow = stalls[i];
            count++;
        }
        if (count == c)
            return true;
    }
    return false;
}
int main()
{
    int stalls[] = {1, 2, 4, 8, 9};
    int n = 5;
    int cows = 3;
    int s = 0;
    int e = stalls[0] - stalls[n - 1];
    int ans = 0;
    while (s <= e)
    {
        int mid = s + e >> 1;
        bool CowsR = cowsCheck(mid, stalls, n, cows);
        if (CowsR)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
}