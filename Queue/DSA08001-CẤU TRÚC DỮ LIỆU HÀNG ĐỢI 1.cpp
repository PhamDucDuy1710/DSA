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
    int n, x ;
    cin >> n ; 
    queue<int> q ; 
    while(n--) {
        cin >> x ;
        if(x == 1) {
            cout << q.size() << "\n" ; 
        }
        else if(x == 2) {
            if(q.empty()) cout << "YES\n" ; 
            else cout << "NO\n" ; 
        }
        else if(x == 3) {
            cin >> x ; 
            q.push(x) ; 
        }
        else if(x == 4) {
            if(!q.empty()) q.pop() ; 
        }
        else if(x == 5) {
            if(q.empty()) cout << "-1\n" ; 
            else cout << q.front() << "\n" ; 
        }
        else if(x == 6) {
            if(q.empty()) cout << "-1\n" ; 
            else cout << q.back() << "\n" ;
        }
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