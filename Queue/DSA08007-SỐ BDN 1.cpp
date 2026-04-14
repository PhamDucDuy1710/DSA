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
    string s ;
    cin >> s ;
    int cnt = 0 ;
    queue<string> q ;
    q.push("1") ; 
    while(true) {
        string t = q.front() ; 
        q.pop() ;
        cnt++ ; 

        string m = t + "0" ; 
        if(m.size() > s.size() || (m.size() == s.size() && m > s)) break ; 
        q.push(m) ; 
        m = t + "1" ; 
        if(m.size() > s.size() || (m.size() == s.size() && m > s)) break ;
        q.push(m) ;
    }
    cout << cnt + q.size() << "\n" ;
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