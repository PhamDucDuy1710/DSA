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
	vector<vector<int>> dske(n+1) ; 
	for(int i = 0 ; i < n - 1; i++) {
		int x, y ;
		cin >> x >> y ;
		dske[x].pb(y) ; 
	} 
	queue<pair<int,int>> q ; 
	q.push({1,0}) ; 
	int ans = 0 ; 
	while(!q.empty()) {
		auto [u, h] = q.front(); q.pop() ; 
		ans = max(ans, h) ; 
		for(int v : dske[u]) {
			q.push({v,h+1}) ;
		}
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
