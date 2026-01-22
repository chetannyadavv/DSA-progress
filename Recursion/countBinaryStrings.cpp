#include <iostream>
using namespace std;
int countBinaryStrings(int N)
{
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    if (N == 2)
        return 3;
    return countBinaryStrings(N - 1) + countBinaryStrings(N - 2);
}