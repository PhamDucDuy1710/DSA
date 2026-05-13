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
struct canh{
	int x, y, w; 
};
bool cmp(canh u, canh v) {
	if(u.w != v.w) return u.w < v.w ; 
	if(u.x != v.x) return u.x < v.x ; 
	return u.y < v.y ; 
}

int n, m ; 
int e[100005], z[100005] ; 
vector<canh> dscanh ; 
void init() {
	for(int i = 1; i <= n ; i++) {
		e[i] = i ; 
		z[i] = 1 ;
	}
}

int Find(int u) {
	if(u == e[u]) {
		return u ; 
	}
	return e[u] = Find(e[u]) ; 
}
bool Union(int x, int y) {
	x = Find(x) ; 
	y = Find(y) ; 
	if(x == y) return 0 ; 
	if(z[x] < z[y]) {
		e[x] = y ;
		z[y] += z[x] ; 
	}
	else {
		e[y] = x ; 
		z[x] += z[y] ; 
	}
	return 1; 
}
void Kruskal() {
	sort(dscanh.begin(), dscanh.end(),cmp) ; 
	vector<canh> MST ; 
	
	ll d = 0 ;
	for(int i = 0 ; i < m ; i++) {
		int x = dscanh[i].x, y = dscanh[i].y, w = dscanh[i].w ; 
		if(Union(x,y)) {
			MST.pb(dscanh[i]) ;
			d += w ; 
		}
		if(MST.size() == n - 1) break ; 
	} 
	if(MST.size() == n - 1) {
		cout << d << "\n" ; 
	}
	else {
		cout << 0 << "\n" ; 
	}
}
void solve() {
	dscanh.clear() ; 
	cin >> n >> m ; 
	for(int i = 0 ; i < m; i++) {
		int x, y, w ; 
		cin >> x >> y >> w; 
		dscanh.pb({x,y,w}) ;
	}
	init() ; 
	Kruskal() ; 
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
