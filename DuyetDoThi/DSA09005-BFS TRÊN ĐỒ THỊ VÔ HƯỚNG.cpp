#include <bits/stdc++.h>
using namespace std ; 
int a[1005][1005], n, vs[1005], e[1005], q[1005] ; 
void Bfs(int u) {
	int v ,dq = 1, cq = 0 ; 
	cq++; 
	q[cq] = u ; 
	vs[u] =1 ; 
	while(dq <= cq) {
		v = q[dq] ; 
		dq++ ; 
		cout << v << " " ; 
		for(int i =1 ; i <= n ;i++) {
			if(vs[i] == 0 && a[v][i] == 1) {
				cq++ ; 
				q[cq] = i ; 
				vs[i] = 1 ; 
				e[i] = v ; 
			}
		}
	}
}
void solve() {
	int E, start ; 
	cin >> n >> E >> start ; 
	for(int i= 1;i <= n;i++) {
		vs[i] = 0 ; 
		for(int j =1 ; j <= n ;j++) {
			a[i][j] = 0 ; 
		}
	}
	for(int i = 0 ; i < E ;i++) {
		int u, v ; 
		cin >> u >> v ;
		a[u][v] = 1 ; 
		a[v][u] = 1 ; 
	}
	Bfs(start) ; 
	cout << "\n" ; 
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