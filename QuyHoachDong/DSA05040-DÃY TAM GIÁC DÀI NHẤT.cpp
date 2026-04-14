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
    vector<int> a(n), dp1(n,1), dp2(n,1) ; 
    for(int &i : a) cin >> i ; 
    for(int i = 1 ; i < n ; i++) {
        if(a[i] > a[i-1]) dp1[i] += dp1[i-1] ; 
    }
    for(int i = n - 2 ; i >= 0 ; i--) {
        if(a[i] > a[i+1]) dp2[i] += dp2[i+1] ;
    } 
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++) {
        ans = max(ans,dp1[i] + dp2[i] - 1) ; 
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