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
    vector<ll> f(1e5 + 1, 0) ; 
    ll tmp = 0; 
    for(int i = 1 ; i <= 3 ; i++) {
        f[i] = tmp + 1 ;
        tmp += f[i] ;
    }
    for(int i = 4 ;i <= n ;i++) {
        for(int j = 1 ; j <= 3 ;j++) {
            f[i] += f[i-j] ;
        }
    }
    cout << f[n] << "\n" ;
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
