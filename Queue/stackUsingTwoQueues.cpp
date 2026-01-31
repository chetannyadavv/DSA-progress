#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> a, b;
    int sz = 0;

public:
    void push(int d)
    {
        if (!a.empty())
            a.push(d);
        else
            b.push(d);
        sz++;
    }

    void pop()
    {
        if (sz == 0)
        {
            cout << "Stack Underflow\n";
            return;
        }

        // Identify active and helper queue
        queue<int> &active = (!a.empty()) ? a : b;
        queue<int> &helper = (active == a) ? b : a;

        // Move all except last element
        while (active.size() > 1)
        {
            helper.push(active.front());
            active.pop();
        }

        // Remove last element (top of stack)
        active.pop();
        sz--;
    }

    int top()
    {
        if (sz == 0)
        {
            cout << "Stack Empty\n";
            return -1;
        }

        queue<int> &active = (!a.empty()) ? a : b;
        queue<int> &helper = (active == a) ? b : a;

        while (active.size() > 1)
        {
            helper.push(active.front());
            active.pop();
        }

        int topElement = active.front();
        helper.push(topElement);
        active.pop();

        return topElement;
    }

    bool empty()
    {
        return sz == 0;
    }

    int size()
    {
        return sz;
    }
};
