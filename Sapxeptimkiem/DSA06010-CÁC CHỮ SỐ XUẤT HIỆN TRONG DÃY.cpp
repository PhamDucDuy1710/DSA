#include<bits/stdc++.h>
using namespace std ; 
void solve() {
	int n ; 
	cin >> n ; 
	int ans = 2e6 ; 
	int b[10] = {} ; 
	for(int i = 0 ; i < n ;i++) {
		long long x ; 
		cin >> x ; 
		while(x) {
			b[x%10]++ ; 
			x /= 10 ; 
		}
	}
	for(int i = 0 ; i< 10 ; i++) {
		if(b[i]) {
			cout << i << " " ; 
		}
	}
	cout << "\n" ; 
}
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		solve() ;
	}
}