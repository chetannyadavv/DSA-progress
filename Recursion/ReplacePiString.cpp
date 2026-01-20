#include <iostream>
using namespace std;
void ReplacePi(char arr[], int l)
{
    if (arr[l] == '\0' || arr[l + 1] == '\0')
    {
        return;
    }
    if (arr[l] == 'p' && arr[l + 1] == 'i')
    {
        int j = l + 2;
        while (arr[j] != '\0')
        {
            j++;
        }
        while (j >= l + 2)
        {
            arr[j + 2] = arr[j];
            j--;
        }
        arr[l] = '3';
        arr[l + 1] = '.';
        arr[l + 2] = '1';
        arr[l + 3] = '4';
        ReplacePi(arr, l + 4);
    }
    else
    {
        ReplacePi(arr, l + 1);
    }
}
int main()
{
    char a[1000];
    cin >> a;
    ReplacePi(a, 0);
    cout << a << endl;
}