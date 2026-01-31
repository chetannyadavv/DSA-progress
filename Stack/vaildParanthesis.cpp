#include <iostream>
#include <stack>
using namespace std;
bool isValid(char *s)
{
    stack<char> s0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        if (ch == '(')
            s0.push(ch);
        else if (ch == ')')
        {
            if (s0.empty() or s0.top() != '(')
                return false;
            s0.pop();
        }
    }
    return s0.empty();
}
int main()
{
    char s[] = "((()()))";
    if (isValid(s))
        cout << "True";
    else
        cout << "False";
}