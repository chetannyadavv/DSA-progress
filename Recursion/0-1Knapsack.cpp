#include <iostream>
using namespace std;
int profit(int N, int C, int *weights, int *prices)
{
    if (N == 0 || C == 0)
        return 0;
    int inc, exc = 0;
    if (weights[N - 1] <= C)
        inc = prices[N - 1] + profit(N - 1, C - weights[N - 1], weights, prices);
    exc = profit(N - 1, C, weights, prices);
    return max(inc, exc);
}

int main()
{

    int weights[] = {1, 2, 3, 5};
    int prices[] = {40, 20, 30, 100};
    int N = 4;
    int C = 7;
    cout << profit(N, C, weights, prices);
}