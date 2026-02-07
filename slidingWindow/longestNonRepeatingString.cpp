
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[] = "ABCEFB";
    int n = strlen(a);
    int arr[256];
    for (int i = 0; i < 256; i++)
        arr[i] = -1;
    int current_lenght = 1, max_lenght = 1;
    arr[a[0]] = 0;
    for (int i = 1; i < n; i++)
    {
        int last_occur = arr[a[i]];

        if (last_occur == -1 || (i - current_lenght) > last_occur)
        {
            current_lenght++;
            max_lenght = max(max_lenght, current_lenght);
        }
        else
        {
            if (current_lenght > max_lenght)
                max_lenght = current_lenght;
            current_lenght = i - last_occur;
        }
        arr[a[i]] = i;
    }
    cout << max_lenght;
}