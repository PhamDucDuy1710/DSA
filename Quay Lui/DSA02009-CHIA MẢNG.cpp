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
int n, k, s ; 
bool ok ; 
int a[25] ; 
void Try(int sum, int cnt) {
	if(ok) return ; 
	if(cnt == k) {
		ok = 1 ;
		return ; 
	}
	for(int i = 0 ; i< n ; i++) {
		if(sum == s) {
			Try(0,cnt + 1) ; 
		}
		else if(sum < s) {
			Try(sum + a[i], cnt) ; 
		}
		else {
			return ; 
		}
	}
}
void solve() {
	s = 0, ok = 0 ; 
	cin >> n >> k ; 
	for(int i = 0; i < n ; i++) {
		cin >> a[i] ; 
		s += a[i] ; 
	}
	if(s % k != 0) {
		cout << 0 << "\n" ; 
		return ; 
	} 
	s /= k ; 
	Try(0,0) ; 
	cout << ok << "\n" ; 
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
