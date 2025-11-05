#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int n;
    cin >> n;
    cin.get();
    int large = 0;
    char largest[1000];
    while (n > 0)
    {
        cin.getline(a, 1000);
        int l = strlen(a);
        if (l > large)
        {
            large = l;
            strcpy(largest, a);
        }
        n--;
    }
    cout << largest;
}