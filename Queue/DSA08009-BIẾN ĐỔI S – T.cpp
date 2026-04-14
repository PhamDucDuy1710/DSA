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
    int s, t; 
    cin >> s >> t ; 
    queue<pair<int,int>> q ; 
    map<int,bool> m ; 
    q.push({s,0}) ; 
    while(!q.empty()) {
        pair<int,int> p = q.front(); q.pop() ; 
        if(p.first == t) {
            cout << p.second << "\n" ; 
            return ; 
        }
        if(p.first - 1 == t || p.first * 2 == t) {
            cout << p.second + 1 << "\n" ; 
            return ; 
        }
        if(p.first * 2 <= t * 2 && m[p.first * 2] == 0) {
            q.push({p.first*2,p.second+1}) ; 
            m[p.first*2] = 1 ;
        }
        if(p.first - 1 >= 0 && m[p.first - 1] == 0) {
            q.push({p.first-1,p.second + 1}) ; 
            m[p.first-1] = 1;
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