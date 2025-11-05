#include <iostream>
using namespace std;
int binary_search(int arr[], int left, int right, int n)
{
    if (left > right)
        return -1;
    int mid = (left + right) >> 1;
    if (arr[mid] == n)
        return mid;
    else if (arr[mid] > n)
        return binary_search(arr, left, mid - 1, n);
    else
        return binary_search(arr, mid + 1, right, n);
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 7, 8, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    cout << binary_search(arr, 0, n - 1, 4);
}