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

vector<int> adj[1005];
bool vs[1005];
int parent[1005];
vector<int> cycle;

bool dfs(int u, int par) {
    vs[u] = true;
    for(int v : adj[u]) {
        if(!vs[v]) {
            parent[v] = u;
            if(dfs(v, u)) return true;
        }
        else if(v != par) {
            int x = u;
            cycle.push_back(v);
            while(x != v) {
                cycle.push_back(x);
                x = parent[x];
            }
            cycle.push_back(v);
            return true;
        }
    }
    return false;
}

void solve() {
    int n, E;
    cin >> n >> E;

    for(int i = 1; i <= n; i++) {
        adj[i].clear();
        vs[i] = false;
        parent[i] = -1;
    }

    for(int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cycle.clear();

    if(dfs(1, -1)) {
        reverse(cycle.begin(), cycle.end());
        for(int x : cycle) cout << x << " ";
        cout << "\n";
    } else {
        cout << "NO\n";
    }
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