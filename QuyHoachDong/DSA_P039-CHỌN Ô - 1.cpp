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
int p[25] ; 
void prepare() {
    p[0] = 1 ; 
    for(int i = 1 ; i < 25 ; i++) p[i] = p[i-1] * 2 ; 
}

int cntbit(int x) {
    int cnt = 0 ; 
    while(x) {
        cnt += x % 2 ; 
        x /= 2 ; 
    }
    return cnt ; 
}
void solve() {
    int n ; 
    cin >> n ; 
    vector<vector<int>> a(n, vector<int>(n)) ; 
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> a[i][j] ; 
        }
    }
    int m = p[n] ; 
    vector<int> dp(m,0) ; 
    for(int i = 0 ; i < m ; i++) {
        int j = cntbit(i) ; 
        if(j >= n) continue ; 
        for(int k = 0 ; k < n ; k++) {
            if(!(i & p[k])) {
                int i1 = i + p[k] ; 
                dp[i1] = max(dp[i1], dp[i] + a[j][k]) ;
            }
        }
    }
    cout << dp[m-1] << "\n" ;
}

int main() {
    prepare() ; 
    faster();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}