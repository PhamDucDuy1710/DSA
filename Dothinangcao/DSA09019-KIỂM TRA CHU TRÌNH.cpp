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

vector<int> adj[1005] ; 
bool vs[1005] ; 

bool dfs(int u, int pat) {
    vs[u] = true ; 
    for(int v : adj[u]) {
        if(!vs[v]) {
            if(dfs(v,u)) return true ;    
        }
        else if(v != pat) {
            return true ; 
        }
    }
    return false ; 
}

void solve() {
    int n, E ;
    cin >> n >> E ; 
    for(int i = 1 ; i <= n ; i++) {
        adj[i].clear() ; 
        vs[i] = false ; 
    }

    for(int i = 0 ; i < E ; i++) {
        int u, v ;
        cin >> u >> v ; 
        adj[u].pb(v) ; 
        adj[v].pb(u) ; 
    }

    bool ok = false ;

    for(int i = 1 ;i <= n ; i++) {
        if(!vs[i]) {
            if(dfs(i,-1)) {
                ok = true ;
                break ; 
            }
        }
    }
    if(ok) cout << "YES\n" ; 
    else cout << "NO\n" ;  
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