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
    int n, s ;
    cin >> n >> s ;
    int a[n], f[s+1] = {} ; 
    f[0] = 1 ; 
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i] ; 
        for(int j = s ; j >= 1 ;j--) {
            if(j >= a[i] && f[j] == 0 && f[j-a[i]] == 1) {
                f[j] = 1 ;
            }
        }
    }
    if(f[s]) cout << "YES\n" ; 
    else cout << "NO\n" ; 
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