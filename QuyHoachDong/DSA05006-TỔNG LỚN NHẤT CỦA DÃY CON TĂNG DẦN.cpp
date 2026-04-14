#include <bits/stdc++.h>
using namespace std;
void solve() {
	int n ;
	cin >> n ; 
	vector<int> a(n), dp(n) ; 
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i] ; 
		dp[i] = a[i] ; 
	}
	for(int i = 1; i < n ; i++) {
		for(int j = 0 ; j < i ; j++) {
			if(a[i] > a[j]) {
				dp[i] = max(dp[i],dp[j] + a[i]) ; 
			} 
		}
	}
	cout << *max_element(dp.begin(),dp.end()) << "\n" ; 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t; 
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}