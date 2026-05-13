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
int n,  a[1005][1005]; 
bool vs[1000005] ;
void solve() {
	int E ;
	cin >> n >> E ;
	for(int i= 0 ; i < E ;i++) {
		int u, v ;
		cin >> u >> v ;
		a[u][v] = 1 ;
		a[v][u] = 1 ;
	}
	map<int,int> m ;
	vector<int> res; 
	if(!vs[1]) {
		queue<int> q ;
		q.push(1) ; 
		vs[1] = true ;
		while(!q.empty()) {
			int v = q.front() ;
			q.pop() ;
			res.pb(v) ;
			for(int i = 1 ; i <= n ;i++) {
				if(!vs[i] && a[v][i] == 1) {
					vs[i] = true ;
					q.push(i);
				}
			}
		}
	}
	for(auto x : res) m[x]++ ; 
	bool ok = 0 ;
	for(int i = 1 ; i <= n ; i++) {
		if(m[i] == 0) {
			ok = 1; 
			break ;
		} 
	}
	if(!ok) cout << 0 << "\n" ; 
	else {
		for(int i = 1 ;i <= n ; i++) {
			if(m[i] == 0) cout << i << "\n" ;
		}
	}
}

int main() {
    faster();
    int t = 1; 
//    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
