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
int n, c[105][105], X[100] ; 
int vs[105] ;
int d =0 ,ans = INT_MAX, cmin = INT_MAX ;
void Try(int i) {
	for(int j = 1; j <= n ;j++) {
		if(!vs[j]) {
			vs[j] = 1; 
			X[i] = j ; 
			d += c[X[i-1]][X[i]] ; 
			if(i == n) {
				ans = min(ans, d + c[X[n]][1]) ; 
			}
			else if(d + (n - i + 1) * cmin < ans) {
				Try(i+1) ;
			}
			vs[j] = 0 ; 
			d -= c[X[i-1]][X[i]] ; 
 		}
	}
}
void solve() {
	cin >> n ; 
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1; j <= n;j++) {
			cin >> c[i][j] ;
			if(c[i][j] != 0) {
				cmin = min(cmin,c[i][j]) ; 
			}
		}
	}
	memset(vs,0,sizeof(vs)) ; 
	X[1] = 1, vs[1] = 1 ;
	Try(2) ; 
	cout << ans << "\n" ; 
}

int main() {
    faster();
    int t =1 ; 
//    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
