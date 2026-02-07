#include <iostream>

#include <vector>
#include <deque>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        arr.push_back(j);
    }
    int k;
    cin >> k;
    deque<int> x;
    int maximumElement = 0;
    for (int i = 0; i < k; i++)
    {
        while (!x.empty() and arr[i] > arr[x.back()])
            x.pop_back();
        x.push_back(i);
    }

    for (int i = k; i < n; i++)
    {
        cout << arr[x.front()] << " ";
        while (!x.empty() and x.front() <= i - k)
            x.pop_front();
        while (!x.empty() and arr[x.back()] < arr[i])
            x.pop_back();
        x.push_back(i);
    }
    cout << arr[x.front()];
}