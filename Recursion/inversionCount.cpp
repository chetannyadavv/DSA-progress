#include <iostream>
#include <vector>
using namespace std;

int mergeAndCount(int *arr, int l, int mid, int r)
{
    int inv = 0;
    vector<int> temp(r - l + 1);
    int i = l;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv += (mid - i + 1);
        }
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (int x = 0; x < temp.size(); x++)
        arr[x + l] = temp[x];

    return inv;
}
int inversionCount(int *arr, int l, int r)
{
    if (l >= r)
        return 0;
    int mid = (l + r) / 2;
    int inv = 0;
    inv += inversionCount(arr, l, mid);
    inv += inversionCount(arr, mid + 1, r);
    inv += mergeAndCount(arr, l, mid, r);

    return inv;
}
int main()
{
    int arr[] = {
        2, 3, 1, 5, 2, 9};
    int n = sizeof(arr) / sizeof(int);
    cout << inversionCount(arr, 0, n - 1);
}