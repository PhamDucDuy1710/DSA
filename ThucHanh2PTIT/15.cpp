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
	int n , S ; 
	cin >> n >> S ; 
	int a[n+1], c[n+1] ; 
	for(int i = 1 ;i <= n ; i++) {
		cin >> a[i] >> c[i] ; 
	} 
	int dp[n+1][S+1] ; 
	memset(dp,0,sizeof(dp)) ; 
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= S ;j++) {
			dp[i][j] = dp[i-1][j] ; 
			if(j >= a[i]) {
				dp[i][j] = max(dp[i][j], dp[i-1][j - a[i]] + c[i]) ; 					
			}
		}
	}
	cout << dp[n][S] << "\n" ; 
}

int main() {
    faster();
    int t = 1; 
//    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
