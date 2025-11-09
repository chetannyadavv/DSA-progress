#include <iostream>
using namespace std;
int FirstOccurence(int *arr, int key, int n)
{
    if (n == 0)
        return -1;
    if (arr[0] == key)
        return 0;
    int i = FirstOccurence(arr + 1, key, n - 1);
    if (i == -1)
        return i;
    return i + 1;
}
int LastOccurrence(int *arr, int key, int n)
{
    if (n == 0)
        return -1;
    int i = LastOccurrence(arr + 1, key, n - 1);
    if (i == -1)
    {
        if (arr[0] == key)
            return 0;
        else
            return -1;
    }
    return i + 1;
}
void allOccurence(int *arr, int key, int n, int i)
{
    if (i == n)
        return;
    if (arr[i] == key)
        cout << i << " ";
    allOccurence(arr, key, n, i + 1);
}

int main()
{
    int arr[] = {0, 4, 2, 3, 4, 5, 6, 4, 4, 9};
    int n = sizeof(arr) / sizeof(int);
    int key = 4;

    allOccurence(arr, key, n, 0);
}