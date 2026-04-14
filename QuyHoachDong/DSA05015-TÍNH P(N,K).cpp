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
const int mod = 1e9 + 7 ;
void solve() {
	int n, k ; 
	cin >> n >> k ; 
	if(k > n) {
		cout << "0\n" ;
	}
	else if(k == n) {
		cout << "1\n" ;
	}
	else {
		ll res = 1 ; 
		for(int i = n ; i >= n - k + 1; i--) {
			res = res * i % mod ;
		}
		cout << res << "\n" ;
	}
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