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
ll f[10001] ;

void prepare() {
	int i2 = 1, i3 = 1, i5 = 1;
	f[1] = 1 ;
	for(int i = 2 ; i <= 1e4 ; i++) {
		f[i] = min({f[i2]*2,f[i3]*3,f[i5]*5}) ;
		if(f[i] == f[i2]*2) i2++ ; 
		if(f[i] == f[i3]*3) i3++ ;
		if(f[i] == f[i5]*5) i5++ ;
	}
}
void solve() {
	int n ;
	cin >> n ; 
	cout << f[n] << "\n" ;
}

int main() {
	prepare() ;
	faster();
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}