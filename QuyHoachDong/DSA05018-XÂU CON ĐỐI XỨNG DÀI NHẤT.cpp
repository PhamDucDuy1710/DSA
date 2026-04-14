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
	string s; 
	cin >> s ;
	s = "x" + s ; 
	int n = s.size() ; 
	bool f[n+1][n+1] ; 
	memset(f,false,sizeof(f)) ; 
	int ans = 0 ; 
	for(int i = 1 ; i <= n ; i++) f[i][i] = true ;
	for(int len = 2 ; len <= n ; len++) {
		for(int i = 1 ; i <= n - len + 1 ;i++) {
			int j = i + len - 1 ; 
			if(len == 2) {
				if(s[i] == s[j]) {
					f[i][j] = true ;
				}
			}
			else {
				f[i][j] = f[i+1][j-1] && s[i] == s[j] ;
			}

			if(f[i][j]) ans = max(ans,len) ;
		}
	}
	cout << ans << "\n" ;
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