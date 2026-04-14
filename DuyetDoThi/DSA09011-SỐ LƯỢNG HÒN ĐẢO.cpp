#include<bits/stdc++.h>
using namespace std ; 
int n, m ; 
int a[505][505]; 
bool visited[505][505] ; 
int dx[8] = {-1,-1,-1,0,0,1,1,1} ; 
int dy[8] = {-1,0,1,-1,1,-1,0,1} ; 
void DFS(int i, int j) {
	visited[i][j] = true ; 
	for(int k = 0 ;k < 8;k++) {
		int i1 = i + dx[k] ; 
		int j1 = j + dy[k] ; 
		if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m) {
			if(a[i1][j1] == 1 && !visited[i1][j1]) {
				DFS(i1,j1) ; 
			}
		}
	}
}
void solve() {
	cin >> n >> m ; 
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> a[i][j] ; 
			visited[i][j] = false ; 
		}
	}
	int cnt = 0 ; 
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(a[i][j] == 1 && !visited[i][j]) {
				cnt++ ; 
				DFS(i,j) ; 
			}
		}
	}
	cout << cnt << "\n" ; 
}
int main() {
	ios::sync_with_stdio(false) ; 
	cin.tie(nullptr) ; 
	int t; 
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}