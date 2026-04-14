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


int main() {
    int n, q ; 
    cin >> n >> q ; 
    vector<long long> dp(n + 1,0) ; 
    for(int i = 1 ; i <= n ;i++) {
        int x ;
        cin >> x ; 
        dp[i] = dp[i-1] + max(0,x) ;
    }
    while(q--) {
        int l, r ;
        cin >> l >> r ; 
        cout << dp[r] - dp[l-1] << "\n" ; 
    }
}