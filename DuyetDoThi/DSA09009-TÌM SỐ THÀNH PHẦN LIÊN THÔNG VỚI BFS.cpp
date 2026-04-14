#include<bits/stdc++.h>
using namespace std ;
int a[1005][1005], lt[1005], n, e[1005], q[1005] ; 
void BFS(int u) {
	int v, dq = 1, cq = 0 ; 
	cq++ ; 
	q[cq] = u ; 
	lt[u] = 1; 
	while(dq <= cq) {
		v = q[dq] ; 
		dq++ ; 
		for(int i = 1 ; i <= n ; i++) {
			if(lt[i] == 0 && a[v][i] == 1) {
				cq++ ; 
				q[cq] = i ; 
				lt[i] = 1 ; 
				e[i] = v; 
			}
		}
	}
}
int tpltBfs() { 
	int k = 0 ; 
	for(int u = 1 ; u <= n ;u++) {
		lt[u] = 0 ; 
	}
	for(int u = 1; u <= n ;u++) {
		if(lt[u] == 0) {
			k++ ; 
			BFS(u) ; 
		}
	}
	return k ; 
	
}
void solve() {
	int E ; 
	cin >> n >> E ; 
	for(int i = 1 ; i <= n ;i++) {
		lt[i] = 0 ; 
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
	cout << tpltBfs() << "\n" ; 
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