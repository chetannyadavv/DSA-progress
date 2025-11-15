#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubbleSort(arr, n - 1);
}
int main()
{
    int arr[] = {3, 5, 7, 4, 6, 8, 5, 2, 2};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    for (auto num : arr)
        cout << num << " ";
}