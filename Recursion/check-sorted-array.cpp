#include <iostream>
using namespace std;
bool Rec(int a[], int n)
{
    if (n == 0 || n == 1)
        return true;
    if (a[0] < a[1] && Rec(a + 1, n - 1))
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    if (Rec(arr, n))
        cout << "true";
    else
        cout << "false";
}