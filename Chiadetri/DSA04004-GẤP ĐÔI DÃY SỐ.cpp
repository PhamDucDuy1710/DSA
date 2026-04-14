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

vector<long long> f(55) ;  
void prepare() {
    f[1] = 1 ;
    for(int i = 2 ;i < f.size() ; i++) {
        f[i] = f[i-1] * 2 ; 
    }
}

void solve() {
    long long n, k ;
    cin >> n >> k ; 
    for(int i = n ; i >= 1 ; i--) {
        if(k > f[i]) k -= f[i] ; 
        else if(k == f[i]) {
            cout << i << "\n" ; 
            return ; 
        }
    }
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