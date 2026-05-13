#include <bits/stdc++.h>

using namespace std;

const int MAXN = 20005;
vector<int> adj[MAXN];
bool visited[MAXN];
int vis[MAXN];
int timestamp = 0;
vector<int> component;
bool in_comp[MAXN];

void dfs(int u) {
    visited[u] = true;
    component.push_back(u);
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int count_components_in_neighbors(int v, const vector<int>& comp) {
    vector<int> neighbors;
    for (int u : adj[v]) {
        if (in_comp[u]) {
            neighbors.push_back(u);
        }
    }
    if (neighbors.empty()) return 0;
    timestamp++;
    int cnt = 0;
    queue<int> q;
    for (int start : neighbors) {
        if (vis[start] != timestamp) {
            cnt++;
            q.push(start);
            vis[start] = timestamp;
            while (!q.empty()) {
                int cur = q.front(); q.pop();
                for (int nei : adj[cur]) {
                    if (in_comp[nei] && vis[nei] != timestamp) {
                        vis[nei] = timestamp;
                        q.push(nei);
                    }
                }
            }
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visited, 0, sizeof(visited));
    vector<vector<int>> components;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            component.clear();
            dfs(i);
            components.push_back(component);
        }
    }
    int C = components.size();
    vector<int> answers(N + 1);
    for (auto& comp : components) {
        memset(in_comp, 0, sizeof(in_comp));
        for (int u : comp) in_comp[u] = true;
        for (int v : comp) {
            int K = count_components_in_neighbors(v, comp);
            answers[v] = C - 1 + K;
        }
    }
    for (int i = 1; i <= N; i++) {
        cout << answers[i] << '\n';
    }
    return 0;
}