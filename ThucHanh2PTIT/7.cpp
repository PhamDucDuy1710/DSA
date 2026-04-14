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
	long long a, b; 
	cin >> a >> b ; 
	vector<long long> v ; 
	queue<long long> dq ; 
	dq.push(4) ; 
	dq.push(7) ;
	while(!dq.empty()) {
		long long x = dq.front() ; 
		dq.pop() ; 
		if(x > 1e10) continue ; 
		v.push_back(x) ; 
		dq.push(x * 10 + 4) ; 
		dq.push(x * 10 + 7) ;
	}
	sort(v.begin(),v.end()) ; 
	long long res = 0 ;
	long long ans = 1 ;
	for(auto x : v) {
		if(x < a) {
			ans = x + 1 ; 
			continue ; 
		}
		long long l = max(ans,a) ; 
		long long r = min(x,b) ;
		if(l <= r) {
			res += (r - l + 1) * x ;
		}
		ans = x + 1 ; 
		if(x > b) break ;
	}
	cout << res << "\n" ; 
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
