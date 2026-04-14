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
const ll mod = 1e9 + 7 ;
void solve() {
	ll a, b  ;  
	while(cin >> a >> b) {
		if(a == 0 && b == 0) {
			break ; 
		}
		else {
			ll res = 1 ; 
			while(b) {
    			if(b%2) res = (res*a) % mod ; 
				b /= 2 ; 
				a = (a*a) % mod ;  
			}
				cout << res << "\n" ; 
		}
	}
}

int main() {
    faster();
    int t = 1 ;
//    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
