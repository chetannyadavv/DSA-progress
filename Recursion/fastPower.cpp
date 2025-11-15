#include <iostream>
using namespace std;
int fastPower(int a, int n)
{
    if (n == 0)
        return 1;
    int half = fastPower(a, n / 2);
    if (n & 1)
        return a * half * half;
    else
        return half * half;
}
int main()
{
    cout << fastPower(2, 5);
}