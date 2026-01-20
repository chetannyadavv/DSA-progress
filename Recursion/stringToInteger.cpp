#include <iostream>
using namespace std;
int stringToInteger(string *s, int l)
{
    if (l == 0)
        return 0;
    int digit = (*s)[l - 1] - '0';
    int small_ans = stringToInteger(s, l - 1);

    return small_ans * 10 + digit;
}

int main()

{
    string s = "541";

    cout << stringToInteger(&s, 3);
}