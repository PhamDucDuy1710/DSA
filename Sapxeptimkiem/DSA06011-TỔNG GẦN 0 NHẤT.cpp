#include<bits/stdc++.h>
using namespace std ; 
void solve() {
	int n ; 
	cin >> n ; 
	int ans = 2e6 ; 
	vector<int> a(n) ; 
	for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
	for(int i = 0 ; i < n ; i++) {
		for(int j = i  + 1 ; j < n ; j++) {
			int sum = a[i] + a[j] ; 
			if(abs(sum) < abs(ans)) {
				ans = sum ; 
			}
		}	
	}
	cout << ans << "\n" ; 
}
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		solve() ;
	}
}