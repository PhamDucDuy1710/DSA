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

bool check(string s, int n) {
    int x = 0 ;
    for(int i = 0 ; i < s.size() ; i++) {
        x = (x * 10 + (s[i] - '0')) % n ; 
    }
    return x == 0 ;
}

void solve() {
    int n ; 
    cin >> n ; 
    queue<string> q ; 
    q.push("1") ; 
    while(true) {
        string s = q.front() ; 
        q.pop() ; 
        if(check(s,n)) {
            cout << s << "\n" ; 
            return ; 
        }
        q.push(s + "0") ; 
        q.push(s + "1") ;
    } 
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