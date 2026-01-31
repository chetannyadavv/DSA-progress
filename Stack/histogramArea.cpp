#include <bits/stdc++.h>
using namespace std;
int maximumArea(vector<int> bars)
{
    int n = bars.size();
    stack<int> sol;
    int max_area = 0;
    for (int i = 0; i <= n; i++)
    {
        int h = (i == n) ? 0 : bars[i];
        while (!sol.empty() && h < bars[sol.top()])
        {
            int last_height = sol.top();
            sol.pop();
            int width = sol.empty() ? i : i - sol.top() - 1;
            max_area = max(max_area, bars[last_height] * width);
        }
        sol.push(i);
    }
    return max_area;
}
int main()
{
    vector<int> A{70, 50, 40, 50, 20, 30};
    cout << maximumArea(A);
}
