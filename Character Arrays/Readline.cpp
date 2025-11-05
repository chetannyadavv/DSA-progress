#include <bits/stdc++.h>
using namespace std;
void readLine(char a[], int maxLen)
{
    int i = 0;
    char ch = cin.get();
    while (ch != '\n')
    {
        a[i] = ch;
        i++;
        if (i == maxLen - 1)
            break;
        ch = cin.get();
    }
    a[i] = '\0';
}
int main()
{
    char a[1000];
    readLine(a, 1000); /// cin.getline(a,1000,'&')
    cout << a;
}