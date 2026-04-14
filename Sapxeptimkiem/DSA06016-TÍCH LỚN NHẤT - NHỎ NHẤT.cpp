#include<bits/stdc++.h>
using namespace std ; 

void solve() {
	int n , m ; 
	cin >> n >> m ; 
	int a[n] , b[m] ; 
	for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
	sort(a,a+n) ; 
	for(int i  =0 ; i < m ;i++) cin >> b[i] ;
	sort(b,b+n) ; 
	cout << 1ll*b[0]*a[n-1] << "\n" ;  
}
int main() {
	ios::sync_with_stdio(0) ; 
	cin.tie(0) ; 
	int t ;
	cin >> t ;
	while(t--) {
		solve() ;
	}
}