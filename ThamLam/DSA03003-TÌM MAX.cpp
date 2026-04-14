#include<bits/stdc++.h>
using namespace std ; 
const int mod = 1e9 + 7;
int main() {
	int t ;
	cin >> t ; 
	while(t--) {
		int n ; 
		cin >> n ; 
		vector<long long> a(n) ; 
		for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
		sort(a.begin(), a.end()) ; 
		long long sum = 0 ; 
		for(int i = 0 ; i < n ; i++) {
			sum = (sum + i * a[i]) % mod ; 
		} 
		cout << sum << "\n" ; 
	}
}