#include <bits/stdc++.h>
using namespace std ; 
int a[1005][1005], n, u, vs[1005] ; 
void Dfsdequy(int u) {
    int v ; 
    cout << u << " " ; 
    vs[u] = 1;
    for(v = 1; v <= n ; v++) {
        if(vs[v] == 0 && a[u][v] == 1) {
            Dfsdequy(v) ; 
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
	}
	Dfsdequy(start) ; 
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