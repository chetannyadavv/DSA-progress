#include <iostream>
using namespace std;
int multiply(int a, int b)
{
    if (b == 1)
        return a;
    return a + multiply(a, b - 1);
}
int main()
{
    int a = 11, b = 19;
    int ans = multiply(a, b);
    cout << ans;
}