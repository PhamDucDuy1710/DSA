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
    int x ;
    string s ; 
    deque<int> dq ; 
    while(n--) {
        cin >> s ;
        if(s == "PUSHFRONT") {
            cin >> x ;
            dq.push_front(x) ; 
        }
        else if(s == "PRINTFRONT") {
            if(dq.empty()) cout << "NONE\n" ;
            else cout << dq.front() << "\n" ;
        }
        else if(s == "POPFRONT") {
            if(!dq.empty()) {
                dq.pop_front() ; 
            }
        }
        else if(s == "PUSHBACK") {
            cin >> x ; 
            dq.push_back(x) ;
        }
        else if(s == "PRINTBACK") {
            if(dq.empty()) cout << "NONE\n" ; 
            else cout << dq.back() << "\n" ; 
        }
        else {
            if(!dq.empty()) {
                dq.pop_back() ; 
            }
        }
    }
}

int main() {
    faster();
    int t = 1 ; 
    // cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}