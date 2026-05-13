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
    string s ; 
    cin >> s ; 
    int dd[127] = {} ; 
    priority_queue<int> q ; 
    for(char i : s) dd[i]++ ; 
    for(int i : dd) {
        if(i > 0) q.push(i) ; 
    }
    while(n--) {
        if(q.empty()) break ; 
        int x = q.top() ; q.pop() ; 
        x-- ; 
        q.push(x) ; 
    }
    ll ans = 0 ; 
    while(!q.empty()) {
        ll x = q.top(); q.pop() ; 
        ans += x * x ; 
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