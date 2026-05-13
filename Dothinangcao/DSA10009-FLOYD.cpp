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

void Floyd(int n, vector<vector<ll>>& a) {
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ;j <= n ;j++) {
			for(int k = 1 ;k <= n ; k++) {
				if(a[j][i] != LLONG_MAX && a[i][k] != LLONG_MAX) {
					a[j][k] = min(a[j][k], a[j][i] + a[i][k]) ; 
				}
			}
		}
	}
}
void solve() {
	int n, m ;
	cin >> n >> m ; 
	vector<vector<ll>> a(n+1,vector<ll> (n+1,LLONG_MAX)) ;
	
	for(int i = 1 ; i <= n ;i++) {
		a[i][i] = 0 ;
	}
	for(int i = 1 ;i<= m ;i++) {
		ll x, y, w ; 
		cin >> x >> y >> w ; 
		
		a[x][y] = w; 
		a[y][x] = w;
	}
	Floyd(n,a) ; 
	
	int q ; 
	cin >> q ;
	while(q--) {
		int x, y ;
		cin >> x >> y ; 
		if(a[x][y] == LLONG_MAX) {
			cout << -1 << "\n" ; 
		} 
		else {
			cout << a[x][y] << "\n" ; 
		}
	}
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
