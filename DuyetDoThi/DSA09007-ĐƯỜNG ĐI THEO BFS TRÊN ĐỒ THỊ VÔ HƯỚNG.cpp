#include <bits/stdc++.h>
using namespace std ; 
int a[1005][1005], n, vs[1005], e[1005], q[1005] ; 
void Bfs(int u, int target) {
	int v ,dq = 1, cq = 0 ; 
	cq++; 
	q[cq] = u ; 
	vs[u] = 1 ;  
	e[u] = -1 ;  
	while(dq <= cq) {
		v = q[dq] ; 
		dq++ ; 
		if(v == target) return; 
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
	int E, start, endd ;
	cin >> n >> E >> start >> endd ; 
	for(int i= 1;i <= n;i++) {
		vs[i] = 0 ; 
		e[i] = -1 ;  
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
	Bfs(start,endd) ; 
	if(!vs[endd]) {
		cout << "-1\n" ; 
		return ; 
	}
	vector<int> path ; 
	int cur = endd ; 
	while(cur != -1) {
		path.push_back(cur) ; 
		cur = e[cur] ; 
	}
	reverse(path.begin(),path.end()) ; 
	for(auto x : path) {
		cout << x << " " ; 
	}
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