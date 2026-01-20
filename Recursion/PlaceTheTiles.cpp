#include <iostream>
using namespace std;
int PlaceTheTiles(int n)
{
    if (n < 4)
        return 1;
    if (n == 4)
        return 2;
    return PlaceTheTiles(n - 1) + PlaceTheTiles(n - 3);
}
int main()
{
}
