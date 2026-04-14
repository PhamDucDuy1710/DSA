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
long long f[100] ; 
void prepare() {
	f[1] = f[2] = 1 ; 
	for(int i =3 ; i < 100 ;i++) {
		f[i] = f[i-2] + f[i-1] ;
	}
}
void solve() {
	int n ; 
	long long k; 
	cin >> n >> k ; 
	while(1) {
		if(n == 1 || n == 2) {
			if(n == 1) cout << "0\n" ; 
			else cout << "1\n" ; 
			return ; 
		}
		if(k <= f[n-2]) {
			n -= 2 ;
		}
		else {
			k -= f[n-2] ; 
			n -= 1 ;
		}
	}
}

int main() {
    faster();
	prepare() ; 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
