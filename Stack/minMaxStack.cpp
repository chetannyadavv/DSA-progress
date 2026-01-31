#include <bits/stdc++.h>
using namespace std;
class minMaxStack
{
    vector<int> stack;
    vector<int> minStack;
    vector<int> maxStack;

public:
    void push(int d)
    {
        int currect_min = d;
        int currect_max = d;

        if (stack.size())
        {
            currect_min = min(d, minStack[stack.size() - 1]);
            currect_max = max(d, maxStack[maxStack.size() - 1]);
        }
        minStack.push_back(currect_min);
        maxStack.push_back(currect_max);
        stack.push_back(d);
    }
};
int main()
{
}