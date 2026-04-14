#include <bits/stdc++.h>
using namespace std;

#define faster() ios::sync_with_stdio(false); cin.tie(NULL);

int n, E;
vector<int> adj[105];
bool used[105];
bool ok;

void Hamilton(int pos, int u){
    if(ok) return;

    used[u] = true;

    if(pos == n){
        ok = true;
        used[u] = false;
        return;
    }

    for(int v : adj[u]){
        if(!used[v]){
            Hamilton(pos + 1, v);
        }
    }

    used[u] = false;
}

void solve(){
    cin >> n >> E;

    for(int i = 1; i <= n; i++) adj[i].clear();

    for(int i = 1; i <= E; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);   // đồ thị vô hướng
    }

    ok = false;

    for(int i = 1; i <= n; i++){
        memset(used,false,sizeof(used));
        Hamilton(1,i);
        if(ok) break;
    }

    cout << ok << "\n";
}

int main(){
    faster();
    int t;
    cin >> t;
    while(t--) solve();
}