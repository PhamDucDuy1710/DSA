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
    pair<float,float> a[n] ;
    int f[n], ans = 0 ; 
    for(int i = 0 ; i < n ; i++) {
        f[i] = 1 ; 
        cin >> a[i].first >> a[i].second ; 
        for(int j = 0 ; j < i ; j++) {
            if(a[i].first > a[j].first && a[i].second < a[j].second && f[i] <= f[j]) {
                f[i] = f[j] + 1 ; 
            }
        }
        ans = max(ans,f[i]) ; 
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