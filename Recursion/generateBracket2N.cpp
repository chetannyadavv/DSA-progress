#include <iostream>
using namespace std;
void bracketGeneration(char *out, int N, int index, int open, int close)
{
    if (index == 2 * N)
    {
        out[index] = '\0';
        cout << out << "  ";
        return;
    }
    if (open < N)
    {
        out[index] = '(';
        bracketGeneration(out, N, index + 1, open + 1, close);
    }
    if (close < open)
    {
        out[index] = ')';
        bracketGeneration(out, N, index + 1, open, close + 1);
    }
    return;
}
int main()

{
    char out[100];
    int n;
    cin >> n;
    bracketGeneration(out, n, 0, 0, 0);
}