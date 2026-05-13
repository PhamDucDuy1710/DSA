#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10005;

vector<int> adj[MAXN], rev[MAXN];
bool visited[MAXN];
stack<int> st;

void dfs1(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v])
            dfs1(v);
    }
    st.push(u);
}

void dfs2(int u) {
    visited[u] = true;
    for (int v : rev[u]) {
        if (!visited[v])
            dfs2(v);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1 ;
    // cin >> T 
    while (T--) {
        int N, M;
        cin >> N >> M;
        for (int i = 1; i <= N; i++) {
            adj[i].clear();
            rev[i].clear();
            visited[i] = false;
        }
        while (!st.empty()) st.pop();
        for (int i = 0; i < M; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            rev[v].push_back(u);
        } 
        for (int i = 1; i <= N; i++) {
            if (!visited[i])
                dfs1(i);
        }
        memset(visited, false, sizeof(visited));
        int scc = 0;
        while (!st.empty()) {
            int u = st.top();
            st.pop();
            if (!visited[u]) {
                dfs2(u);
                scc++;
            }
        }

        cout << scc << "\n";
    }
}