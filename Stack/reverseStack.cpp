#include <iostream>
#include <stack>
using namespace std;
void transfer(stack<int> &a, stack<int> &b, int n)
{

    for (int i = 0; i < n; i++)
    {
        b.push(a.top());
        a.pop();
    }
}
void reverseStack(stack<int> &a)
{
    stack<int> b;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        int x = a.top();
        a.pop();

        transfer(a, b, n - i - 1);

        a.push(x);
        transfer(b, a, n - i - 1);
    }
}
void insertAtBottom(stack<int> &a, int k)
{
    if (a.empty())
    {
        a.push(k);
        return;
    }
    int data = a.top();
    a.pop();
    insertAtBottom(a, k);
    a.push(data);
}
void reverseStackRecurse(stack<int> &a)
{
    if (a.empty())
        return;
    int x = a.top();
    a.pop();
    reverseStackRecurse(a);
    insertAtBottom(a, x);
}
int main()

{
    stack<int> a;
    a.push(3);
    a.push(1);
    a.push(2);
    reverseStack(a);
    while (!a.empty())
    {
        cout << a.top() << " ";
        a.pop();
    }
}