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
const int mod = 1e9 + 7 ; 
int a[11], f[101] ; 
void prepare() {
    for(int i = 1 ; i <= 10 ;i++) {
        a[i] = 1 ;
    }
    f[1] = 10 ;
    for(int i = 2 ; i <= 100; i++) {
        for(int j = 1 ; j <= 9 ; j++) {
            ll s = 0 ; 
            for(int k = j ; k <= 9 ; k++) {
                s += a[k] ; 
            }
            a[j] = s ; 
            f[i] = (f[i] + s) % mod ; 
        }
    }
    for(int i = 2 ; i <= 100 ; i++) {
        f[i] = (f[i] + f[i-1]) % mod ;
    }
}
void solve() {
    int n ; 
    cin >> n ; 
    cout << f[n] << "\n" ;
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