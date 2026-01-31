#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int cs, ms, f, r;

public:
    queue(int size = 5)
    {
        arr = new int[size];
        cs = 0;
        ms = size;
        f = 0;
        r = ms - 1;
    }
    bool full()
    {
        return cs == ms;
    }
    bool empty()
    {
        return cs == 0;
    }
    void push(int data)
    {
        if (!full())
        {
            r = (r + 1) % ms;
            arr[r] = data;
            cs++;
        }
    }
    void pop()
    {
        if (!empty())
        {
            f = (f + 1) % ms;
            cs--;
        }
    }
    int front()
    {
        return arr[f];
    }
    ~queue()
    {
        if (arr != NULL)
        {
            delete[] arr;
            arr = NULL;
        }
    }
};
int main()
{
}