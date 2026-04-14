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
    queue<string> q ; 
    vector<string> v ;
    q.push("") ; 
    while(!q.empty()) {
        string s = q.front() ; 
        q.pop() ; 

        if(s != "") v.pb(s) ; 

        if(s.size() == n) continue ; 
        q.push(s + "6") ; 
        q.push(s + "8") ;
    }
    cout << v.size() << "\n" ;
    for(auto x : v) {
        cout << x << " " ;
    }
    cout << "\n" ;
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