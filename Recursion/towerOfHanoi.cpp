#include <iostream>
using namespace std;
void move(int n, char src, char helper, char destination)
{
    if (n == 0)
        return;
    move(n - 1, src, destination, helper);
    cout << "MOVING DISK " << n << " from " << src << " to " << destination << endl;
    move(n - 1, helper, src, destination);
}
int main()
{
    int n = 4;
    move(n, 'A', 'B', 'C');
}