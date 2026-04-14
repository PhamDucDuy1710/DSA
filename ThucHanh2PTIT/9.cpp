#include <bits/stdc++.h>
using namespace std;

#define faster() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    faster();
    int t; cin >> t;
    while (t--) {
        int n, m, s;
        cin >> n >> m >> s;

        vector<vector<int>> adj(n + 1);

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }
        vector<int> vs(n + 1, 0), parent(n + 1, -1);

        queue<int> q;
        q.push(s);
        vs[s] = 1;
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) {
                if (!vs[v]) {
                    vs[v] = 1;
                    parent[v] = u;
                    q.push(v);
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (i == s) continue;
            if (!vs[i]) {
                cout << "No path\n";
            } else {
                vector<int> path;
                int cur = i;

                while (cur != -1) {
                    path.push_back(cur);
                    cur = parent[cur];
                }
                reverse(path.begin(), path.end());

                for (int x : path) cout << x << " ";
                cout << "\n";
            }
        }
    }
}