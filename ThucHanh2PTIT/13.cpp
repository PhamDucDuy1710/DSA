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

const int INF = 1e9 ; 

void solve() {
	int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, INF));
    for (int i = 1; i <= n; i++) a[i][i] = 0;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        a[u][v] = min(a[u][v], w);
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            if (a[i][k] == INF) continue; 
            for (int j = 1; j <= n; j++) {
                if (a[k][j] == INF) continue;
                int ans = max(a[i][k], a[k][j]);
                if (a[i][j] > ans) {
                    a[i][j] = ans;
                }
            }
        }
    }
    while (q--) {
        int s, t;
        cin >> s >> t;
        if (a[s][t] == INF) {
            cout << -1 << "\n";
        } else {
            cout << a[s][t] << "\n";
        }
    }

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
