#include<bits/stdc++.h>
using namespace std ; 
int n, k, a[100], b[100] ;  
void result() {
	for(int i = 1 ; i <= k ;i++) {
		cout << b[a[i]]  << " " ; 
	}
	cout << "\n" ; 
}
void Try(int m) {
	for(int i = a[m-1] + 1; i<= n - k + m ; i++) {
		a[m] = i ; 
		if(m == k) result() ; 
		else Try(m + 1) ; 
	}
}
void solve() {
	cin >> n >> k ;
	for(int i = 1; i <= n ; i++) cin >> b[i] ; 
	sort(b+1,b+1+n) ; 
	Try(1) ; 
}
int main() {
	int t; 
	cin >> t ;
	while(t--) {
		solve() ; 
	}	
}