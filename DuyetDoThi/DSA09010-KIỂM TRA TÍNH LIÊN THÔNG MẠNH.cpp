#include<bits/stdc++.h>
using namespace std ; 
int a[1005][1005], lt[1005], n ; 
void DFS(int u) {
	lt[u] = 1 ;
	for(int v = 1 ;v <= n ;v++) {
		if(lt[v] == 0 && a[u][v] == 1) {
			DFS(v) ; 
		}
	}
}
int ltDfs() {
	for(int v = 1 ; v <= n ; v++) {
		lt[v] = 0; 
	}
	DFS(1) ; 
	for(int v = 1 ;v <= n ; v++) {
		if(lt[v] == 0) return 0 ; 
	}
	return 1 ; 
}
void solve() {
	int E ; 
	cin >> n >> E ; 
	for(int i = 1 ; i<= n;i++) {
		lt[i] = 0 ; 
		for(int j = 1 ; j <= n ; j++) {
			a[i][j] = 0 ; 
		}
	}
	for(int i = 0 ; i < E ; i++) {
		int u, v; 
		cin >> u >> v ; 
		a[u][v] = 1 ; 
	}
	if(ltDfs()) cout << "YES\n" ; 
	else cout << "NO\n" ; 
}
int main() {
	ios::sync_with_stdio(false) ; 
	cin.tie(nullptr) ; 
	int t ;
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}