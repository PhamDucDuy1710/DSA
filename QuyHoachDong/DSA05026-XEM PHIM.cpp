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
    int c, n, w; 
    cin >> c >> n ; 
    vector<int> f(c + 1,0) ; 
    f[0] = 1 ; 
    for(int i = 1 ; i <= n ;i++) {
        cin >> w; 
        for(int j = c ; j >= w ;j--) {
            if(f[j-w]) {
                f[j] = 1 ;
            }
        }
    }
    for(int i = c ; i >= 0 ; i--) {
        if(f[i]) {
            cout << i << "\n" ; 
            return ;
        }
    }
}

int main() {
    faster();
    int t = 1 ;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}