#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int i = s - 1;
    int j = s;
    int pivot = arr[e];
    for (; j <= e - 1;)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
        return;
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {2, 3, 1, 6, 4, 3, 8, 6, 0};
    int n = sizeof(arr) / sizeof(int);
    quickSort(arr, 0, n - 1);
    for (auto k : arr)
        cout << k << "";
}