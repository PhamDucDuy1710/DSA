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
    int n, x, y, z ; 
    cin >> n >> x >> y >> z ; 
    vector<int> dp(n+2,0) ; 
    dp[1] = x ; 
    for(int i = 2 ;i <= n ; i++) {
        dp[i] = dp[i-1] + x ; 
        if(i % 2 == 0) {
            dp[i] = min(dp[i], dp[i/2] + z) ; 
        }
        else {
            dp[i] = min(dp[i], dp[(i+1)/2] + z + y) ;
        }
    }
    cout << dp[n] << "\n" ;
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