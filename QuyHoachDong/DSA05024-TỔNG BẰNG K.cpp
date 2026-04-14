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
	vector<long long> a(n+1) ; 
	for(int i = 1 ; i <= n ;i++) cin >> a[i] ; 
	vector<long long> f(k+1,0) ; 
	f[0] = 1 ; 
	for(int i = 1; i <= k ;i++) {
		for(int j =1 ; j <= n ;j++) {
			if(i >= a[j]) {
				f[i] += f[i-a[j]] ; 
				f[i] %= mod ;
			}
		}
	} 
	cout << f[k] << "\n" ; 
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
