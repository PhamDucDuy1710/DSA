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
	int n ; 
	cin >> n ; 
	vector<int> a(n+1), dp(n+1) ; 
	for(int i = 1 ; i <= n ;i++) {
		cin >> a[i] ; 
	} 
	if(n == 1) {
		cout << a[1] << "\n" ;
		return ; 
	}
	dp[1] = a[1] ; 
	dp[2] = max(a[1],a[2]) ; 
	for(int i = 3 ; i <= n ;i++) {
		dp[i] = max(dp[i-1], dp[i-2] + a[i]) ;
	}
	cout << dp[n] << "\n" ;
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