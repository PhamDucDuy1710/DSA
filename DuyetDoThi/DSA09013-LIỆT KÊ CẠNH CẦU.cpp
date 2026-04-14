#include<bits/stdc++.h>
using namespace std ;
int a[1005][1005], lt[1005], n ; 
void DFS(int u) {
	lt[u] = 1 ; 
	for(int v = 1 ; v <= n ;v++) {
		if(lt[v] == 0 && a[u][v] == 1) {
			DFS(v) ; 
		}
	}
}
int tpltDfs() { 
	int k = 0 ; 
	for(int u = 1 ; u <= n ;u++) {
		lt[u] = 0 ; 
	}
	for(int u = 1; u <= n ;u++) {
		if(lt[u] == 0) {
			k++ ; 
			DFS(u) ; 
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
	vector<pair<int,int>> edges ;  
	for(int i = 0 ; i < E ; i++) {
		int u, v ;
		cin >> u >> v ; 
		a[u][v] = 1 ; 
		a[v][u] = 1 ; 
		edges.push_back({u,v}) ; 	
	} 
	int k = tpltDfs() ; 
	for(auto x : edges) {
		int u = x.first ; 
		int v = x.second ; 
		a[u][v] = 0 ; // Bỏ cạnh 
		a[v][u] = 0 ; 
		int I = tpltDfs() ; 
		if(I > k) { // Ghi nhận là cạnh cầu 
			cout << u << " " << v << " " ; 
		}
		a[u][v] = 1 ; // Trả lại để tiếp tục thử xóa cạnh khác
		a[v][u] = 1 ; 
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