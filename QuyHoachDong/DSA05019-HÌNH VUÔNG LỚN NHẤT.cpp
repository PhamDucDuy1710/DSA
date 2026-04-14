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
    int n, m ; 
    cin >> n >> m ; 
    int dp[505][505] ;
    int a[505][505] ; 
    for(int i = 0 ; i < n ;i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> a[i][j] ; 
        }
    }
    int ans = 0 ;
    for(int i = 0 ; i < n ;i++) {
        for(int j =  0 ; j < m ;j++) {
            if(a[i][j] == 1) {
                if(i == 0 || j == 0) dp[i][j] = 1 ; 
                else {
                    dp[i][j] = 1 + min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]}) ;
                } 
                ans = max(ans,dp[i][j]) ; 
            }
            else {
                dp[i][j] = 0 ; 
            }
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