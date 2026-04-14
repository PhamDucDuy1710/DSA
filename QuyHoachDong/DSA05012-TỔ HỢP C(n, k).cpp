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
int c[1001][1001] ; 
const int mod = 1e9 + 7 ;
void solve() {
	int n, k ; 
	cin >> n >> k ; 
	for(int i = 0; i <= 1000; i++) {
		for(int j = 0 ; j <= i ;j++) {
			if(j == 0 || j == n) c[i][j] = 1 ;
			else {
				c[i][j] = (c[i-1][j] + c[i-1][j-1]) % mod ;
			}
		}
	}
	cout << c[n][k] << "\n" ;
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