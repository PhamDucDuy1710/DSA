#include<bits/stdc++.h>
using namespace std ;
const int mod = 1e9 + 7 ; 
void solve() {
	int n ;
	cin >> n ; 
	vector<long long> a(n+1) ; 
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i] ; 
	}
	if(n == 1) {
		cout << a[1] << "\n" ; 
		return ; 
	}
	vector<long long> dp(n+1) ; 
	dp[1] = a[1] ; 
	dp[2] = max(a[1],a[2]) ; 
	for(int i = 3 ; i <= n ; i++) {
		dp[i] = max(dp[i-1],dp[i-2] + a[i]) ; 
	}
	cout << dp[n] << "\n" ; 
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