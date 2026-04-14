#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; i++)
#define FD(i, a, b) for(int i = a; i > b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void solve() {
	int n, m ; 
	cin >> n >> m ; 
	int a[n+1][m+1] ; 
	int dp[n+1][m+1] ; 
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= m ;j++) {
			cin >> a[i][j] ; 
		}
	}
	dp[1][1] = a[1][1] ;
	for(int i = 1 ; i <= n ; i++) dp[i][1] = dp[i-1][1] + a[i][1] ; 
	for(int j = 1 ; j <= m ; j++) dp[1][j] = dp[1][j-1] + a[1][j] ;
	for(int i = 1 ;i <= n ;i++) {
		for(int j = 1 ;j <= m ;j++) {
			dp[i][j] = a[i][j] + min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})  ;
		}
	}
	cout << dp[n][m] << "\n" ;
}

int main() {
	faster();
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}