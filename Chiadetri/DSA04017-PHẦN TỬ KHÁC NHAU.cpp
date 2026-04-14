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
	vector<long long> a(n), b(n-1) ; 
	for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
	for(int i = 0 ; i < n - 1 ; i++) cin >> b[i] ; 
	int l = 0, r = n - 2 ; 
	int ans = n - 1;  
	while(l <= r) {
		int mid = (l + r)/2 ; 
		if(a[mid] == b[mid]) {
			l = mid + 1 ;
		}
		else {
			ans = mid ; 
			r = mid - 1 ; 
		}
	}
	cout << ans + 1 << "\n" ; 
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
