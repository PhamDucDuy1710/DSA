#include<bits/stdc++.h> 
using namespace std;

int N, M;
vector<int> adj[1005];
int par[1005];
bool visited[1005];
vector<int> cycle;
bool found;

void dfs(int u, int p) {
    if (found) return; 
    visited[u] = true;
    par[u] = p;

    for (int v : adj[u]) {
        if (v == p) continue; 
        if (visited[v]) {
            if (v == 1 && !found) {
                found = true;
                vector<int> path;
                int temp = u;
                while (temp != -1) {
                    path.push_back(temp);
                    temp = par[temp];
                }
                reverse(path.begin(), path.end());
                path.push_back(1); 
                cycle = path;
                return;
            }
        } else {
            dfs(v, u);
        }
        if (found) return;
    }
}

void solve() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        adj[i].clear();
        visited[i] = false;
        par[i] = 0;
    }
    found = false;
    cycle.clear();

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= N; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(1, -1);

    if (found) {
        for (int i = 0; i < cycle.size(); i++) {
            cout << cycle[i] << (i == cycle.size() - 1 ? "" : " ");
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}