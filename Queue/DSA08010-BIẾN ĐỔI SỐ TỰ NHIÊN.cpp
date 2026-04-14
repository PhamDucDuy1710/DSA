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
    map<int,bool> m ; 
    queue<pair<int,int>> q ; 
    q.push({n,0}) ; 
    while(!q.empty()) {
        pair<int,int> p = q.front() ; q.pop() ; 
        if(p.first == 2) {
            cout << p.second + 1 << "\n" ; 
            return ; 
        }
        for(int i = 2 ; i <= sqrt(p.first) ; i++) {
            if(p.first % i == 0 && m[p.first / i] == 0) {
                m[p.first / i] = 1 ; 
                q.push({p.first / i,p.second+1}) ; 
            }
        }
        q.push({p.first - 1, p.second + 1}) ; 
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