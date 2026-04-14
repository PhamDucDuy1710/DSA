#include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		int n ;
		cin >> n ; 
		vector<int> a(n), b(n) ; 
		for(int i = 0 ; i < n ;i++) {
			cin >> a[i] ; 
		}
		for(int i = 0 ; i < n ; i++) {
			cin >> b[i] ; 
		}
		sort(a.begin(),a.end()) ; 
		sort(b.rbegin(),b.rend()) ; 
		long long res = 0 ; 
		for(int i = 0 ; i < n ;i++) {
			res += a[i]*b[i] ; 
		}
		cout << res << "\n" ; 
	}
}