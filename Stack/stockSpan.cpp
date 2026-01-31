#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> span(vector<int> a)
{
    vector<int> ans{1};
    stack<int> s;
    s.push(0);
    for (int i = 1; i < a.size(); i++)
    {
        while (!s.empty() and a[i] > a[s.top()])
        {
            s.pop();
        }
        if (s.empty())
            ans.push_back(i + 1);
        else
            ans.push_back(i - s.top());
        s.push(i);
    }
    return ans;
}
int main()
{
    vector<int> a{100, 80, 60, 70, 60, 75, 85};
    vector<int> span_ans = span(a);
    for (auto a0 : span_ans)
    {
        cout << a0 << " ";
    }
}