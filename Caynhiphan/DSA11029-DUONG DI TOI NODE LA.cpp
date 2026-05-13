#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];
vector<int> path;

void dfs(int u) {

    visited[u] = true;
    path.push_back(u);

    bool leaf = true;

    for(int v : adj[u]) {
        if(!visited[v]) {
            leaf = false;
            dfs(v);
        }
    }

    if(leaf) {
        for(int x : path)
            cout << x << " ";
        cout << '\n';
    }

    path.pop_back();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {

        int n;
        cin >> n;

        for(int i = 1; i <= n; i++) {
            adj[i].clear();
            visited[i] = false;
        }

        for(int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i = 1; i <= n; i++)
            sort(adj[i].begin(), adj[i].end());

        path.clear();

        dfs(1);
    }

    return 0;
}