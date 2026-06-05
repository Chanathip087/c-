#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cin >> start;

    vector<bool> visited(n, false);
    vector<int> dist(n, -1);
    vector<int> order;
    queue<int> q;

    visited[start] = true;
    dist[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        order.push_back(u);

        for (int v : graph[u]) {
            if (!visited[v]) {
                visited[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    cout << "BFS order: ";
    for (int i = 0; i < (int)order.size(); i++) {
        if (i) cout << " ";
        cout << order[i];
    }
    cout << "\n";

    cout << "Distance from " << start << ": ";
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << dist[i];
    }
    cout << "\n";

    return 0;
}
