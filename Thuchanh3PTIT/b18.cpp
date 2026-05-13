#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10005;
vector<int> adj[MAXN];
int disc[MAXN], low[MAXN], parent[MAXN], timp = 0;
bool ap[MAXN];
int ap_count = 0, bridge_count = 0;

void dfs(int u) {
    disc[u] = low[u] = timp++;
    int child_count = 0;
    for (int v : adj[u]) {
        if (disc[v] == -1) {
            child_count++;
            parent[v] = u;
            dfs(v);
            low[u] = min(low[u], low[v]);
            if (parent[u] == -1 && child_count > 1) ap[u] = true;
            if (parent[u] != -1 && low[v] >= disc[u]) ap[u] = true;
            if (low[v] > disc[u]) bridge_count++;
        } else if (v != parent[u]) {
            low[u] = min(low[u], disc[v]);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(disc, -1, sizeof(disc));
    memset(parent, -1, sizeof(parent));
    memset(ap, 0, sizeof(ap));
    for (int i = 1; i <= N; i++) {
        if (disc[i] == -1) {
            dfs(i);
        }
    }
    for (int i = 1; i <= N; i++) if (ap[i]) ap_count++;
    cout << ap_count << " " << bridge_count << endl;
    return 0;
}