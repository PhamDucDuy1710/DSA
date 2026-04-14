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
bool check(int n, int d) {
    while(n != 0) {
        if(n % 10 == d) return 1 ; 
        n /= 10 ;
    }
    return 0 ;
}
void solve() {
    int l, r ;
    cin >> l >> r ; 
    queue<int> q ; 
    int cnt = 0 ; 
    for(int i = 1 ; i <= 5 ; i++) q.push(i) ; 
    
    if(l == 0) cnt++ ; 
    while(!q.empty()) {
        int x = q.front() ; q.pop() ; 

        if(x > r) continue ; 
        if(x >= l) cnt++ ; 

        for(int i = 0 ; i <= 5 ; i++) {
            if(!check(x,i)) {
                int y = x * 10 + i ; 
                if(y <= r) {
                    q.push(y) ; 
                }
            }
        }
    }
    cout << cnt << "\n" ;
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