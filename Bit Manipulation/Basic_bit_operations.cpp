#include <bits/stdc++.h>
using namespace std;
bool checkOdd(int n)
{
    return (n & 1);
}
int getBit(int n, int i)
{
    int t = n & (1 << i);
}
void setBit(int n, int i)
{
    int n = n | (1 << i);
}
void clearBit(int n, int i)
{
    int n = n & (~(1 << i))
}
void updateBit(int n, int i, int key)
{
}
int main()
{
    int n = 5;
}