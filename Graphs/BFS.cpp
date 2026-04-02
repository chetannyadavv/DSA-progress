#include <iostream>
#include <map>
#include <queue>
#include <list>

using namespace std;
template <typename T>
class graph
{
    map<T, list<T>> l;

public:
    void addEdge(T x, T y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(T src)
    {
        map<T, int> visited;
        queue<T> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {

            T node = q.front();
            q.pop();

            cout << node << " ";

            for (auto nbr : l[node])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
};

int main()
{
    graph<int> g;
    g.addEdge(2, 1);
    g.addEdge(2, 3);
    g.addEdge(0, 1);
    g.addEdge(3, 0);

    g.bfs(2);
}