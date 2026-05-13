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
int n, m, u ; 
vector<int> ke[1005] ; 
bool vs[1005] ; 
void dfs(int u, vector<pair<int,int>> &res) {
	vs[u] = true ; 
	for(auto v : ke[u]) {
		if(!vs[v]) {
			res.pb({u,v}) ; 
			dfs(v,res) ; 
		}
	}
}
void solve() {
	cin >> n >> m >> u ; 
	for(int i = 1 ;i <= n ; i++) ke[i].clear() ; 
	
	for(int i = 1 ;i <= m ; i++) {
		int x, y ;
		cin >> x >> y ; 
		ke[x].pb(y) ; 
		ke[y].pb(x) ; 
	}
	memset(vs,false,sizeof(vs)) ;
	vector<pair<int,int>> res ; 
	dfs(u,res) ; 
	if(res.size() == n - 1) {
		for(auto x : res) {
			cout << x.first << " " << x.second << "\n" ; 
		}
	}
	else {
		cout << -1 << "\n" ; 
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
