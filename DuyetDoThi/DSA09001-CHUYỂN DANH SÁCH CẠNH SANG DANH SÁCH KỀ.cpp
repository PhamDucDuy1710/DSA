#include<bits/stdc++.h>
using namespace std;

int n, m;
int sp[1000005], ep[1000005];   
vector<int> adj[1005];          

void AdjList() {
    int u, v;

    for(int t = 1; t <= m; t++) {
        u = sp[t];
        v = ep[t];
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    for(u = 1; u <= n; u++) {
        sort(adj[u].begin(), adj[u].end());   

        cout << u << ": ";
        for(int v : adj[u]) {
            cout << v << " ";
        }
        cout << "\n";
    }
}

void solve() {
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        adj[i].clear();

    for(int i = 1; i <= m; i++)
        cin >> sp[i] >> ep[i];

    AdjList();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}