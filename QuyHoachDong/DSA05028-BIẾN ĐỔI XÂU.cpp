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
	string s, t; cin >> s >> t;

		int n = s.size(), m = t.size();
		int dp[maxn][maxn] = {};
		
		for(int i = 0; i <= n; i++) {
			for(int j = 0; j <= m; j++) {
				if(i == 0 || j == 0) dp[i][j] = i + j;
				else if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1];
				else dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
			}
		}

		cout << dp[n][m] << endl;
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