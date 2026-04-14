#include<bits/stdc++.h>
using namespace std ; 

void solve() {
	int n , x; 
	cin >> n >> x ; 
	int a[n] ;
	map<int,int> m ; 
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i] ; 
		m[a[i]]++ ; 
	}
	if(m[x]) {
		cout << "1\n" ; 
	}
	else {
		cout << "-1\n" ; 
	}
	
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