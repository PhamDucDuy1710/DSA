#include<bits/stdc++.h>
using namespace std ;
int a[1001][1001], n, adj[1001][1001] ; 
void AdjList() {
	int u, v, t ;
	for(u = 1 ;u <= n ;u++) {
		t= 0 ; 
		for(v = 1; v <= n ;v++) {
			if(a[u][v] > 0) {
				t++ ; 
				adj[u][t] = v ;
			}
		}
		adj[u][0] = t ;
	}
	for(u = 1; u <= n ;u++) { 
		for(v = 1; v <= adj[u][0] ;v++) {
			cout << adj[u][v] << " " ;
		}
		cout << "\n" ; 
	}
} 
int main() {
	cin >> n ; 
	for(int i = 1 ; i <= n ;i++) {
		for(int j = 1; j <= n ;j++) {
			cin >> a[i][j] ;
		}
	}
	AdjList() ; 
}