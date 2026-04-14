#include<bits/stdc++.h>
using namespace std ;
void solve() {
	string s; 
	cin >> s ; 
	if(s[0] == '0') {
		cout << "0" << "\n" ;
		return ; 
	}
	int n = s.size() ; 
	vector<long long> dp(n+1,0) ; 
	dp[0] = dp[1] = 1 ; 
	for(int i = 2 ; i <= n ; i++) {
		if(s[i-1] != '0') {
			dp[i] += dp[i-1] ; 
		}
		int num = (s[i-2] - '0')*10 + (s[i-1] - '0') ; 
		if(num >= 10 && num <= 26) {
			dp[i] += dp[i-2] ; 
		}
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