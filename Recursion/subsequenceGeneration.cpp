#include <iostream>
using namespace std;
void subsequenceGeneration(char a[], char out[], int i, int j)
{
    if (a[i] == '\0')
    {
        out[j] = '\0';
        cout << out << " ";
        return;
    }
    out[j] = a[i];

    subsequenceGeneration(a, out, i + 1, j + 1);
    subsequenceGeneration(a, out, i + 1, j);
}

int main()
{
    char a[] = "abc";
    char out[10];
    subsequenceGeneration(a, out, 0, 0);
}