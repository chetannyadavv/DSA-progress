#include <iostream>
#include <list>
using namespace std;
class queue
{
    int cs;
    list<int> l;

public:
    queue()
    {
        cs = 0;
    }
    bool isEmpty()
    {
        return cs == 0;
    }
    void push(int data)
    {
        l.push_back(data);
        cs++;
    }
    void pop()
    {
        if (l.empty())
        {
            l.pop_front();
            cs--;
        }
    }
    int front()
    {
        return l.front();
    }
};

int main()
{
}