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
	int a[n] ; 
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i] ; 
	}
	int l[n], r[n] ; 
	for(int i = 0 ; i < n ; i++) {
		l[i] = a[i] ; 
		for(int j = 0 ; j < i ;j++) {
			if(a[i] > a[j]) {
				l[i] = max(l[i], l[j] + a[i]) ; 
			}
		}
	}
	for(int i = n - 1 ;i >= 0 ; i--) {
		r[i] = a[i] ;
		for(int j = n - 1 ; j > i ; j--) {
			if(a[i] > a[j]) {
				r[i] = max(r[i], r[j] + a[i]) ;
			}
		}
	}
	int ans = 0 ; 
	for(int i = 0 ; i < n ; i++) {
		ans = max(ans, l[i] + r[i] - a[i]) ;
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
