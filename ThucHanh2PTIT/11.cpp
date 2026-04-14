#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; i++)
#define FD(i, a, b) for(int i = a; i > b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int bfs(int start, int end, int n, vector<vector<int>>& adj) {
    vector<int> e(n + 1, -1);
    queue<int> q;
    q.push(start);
    e[start] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (u == end) return e[u];
        for (int v : adj[u]) {
            if (e[v] == -1) {
                e[v] = e[u] + 1;
                q.push(v);
            }
        }
    }
    return 1e9;
}

void solve() {
	int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int d12 = bfs(1, 2, n, adj);
    int d21 = bfs(2, 1, n, adj);
    cout << d12 + d21 << endl;
}

int main() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
