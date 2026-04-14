#include<bits/stdc++.h>
using namespace std ; 
int a[1005][1005], n, vs[1005], parent[1005]; // parent : lưu vết đỉnh u 
bool ok ; 
void DFS(int u,int target) {
	vs[u] = 1 ; 
	if(u == target) {
		ok = true  ; 
		return ; 
	}
	for(int v = 1 ; v <= n ;v++) {
		if(!vs[v] && a[u][v] == 1) {
			parent[v] = u ; 
			DFS(v,target) ; 
			if(ok) return ; 
		}
	}
}
void solve() {
	int E ;  
	cin >> n >> E ;  
	for(int i = 1 ; i <= n ; i++) {
		vs[i] = 0 ; 
		parent[i] = -1 ; 
		for(int j = 1 ; j <= n ; j++) {
			a[i][j] = 0 ; 
		}
	}
	for(int i = 0 ; i < E ; i++) {
		int u, v ; 
		cin >> u >> v ; 
		a[u][v] = 1 ;
		a[v][u] = 1 ; 
	}
	int q ; 
	cin >> q ; 
	while(q--) {
		ok = false ; 
		int start, endd ; 
		cin >> start >> endd ; 
		for(int i = 1 ; i <= n ; i++) {
			vs[i] = 0 ; 
			parent[i] = -1 ; 
		}
		DFS(start,endd) ; 
		if(ok) {
			cout << "YES\n" ; 
		}
		else {
			cout << "NO\n" ; 
		}
	}
	
}
int main() {
	ios::sync_with_stdio(false) ; 
	cin.tie(nullptr) ; 
	int t ; 
	cin >> t; 
	while(t--) {
		solve() ; 
	}
}