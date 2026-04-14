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
    vector<int> a(n), l(n), r(n) ; 
    stack<int> st ;
    for(int &i : a) cin >> i ; 
    for(int i = 0 ; i < n ; i++) {
        while(!st.empty() && a[st.top()] >= a[i]) st.pop() ; 
        
        if(st.empty()) l[i] = 1 ; 
        else l[i] = st.top() + 1 ;

        st.push(i) ; 
    } 
    while(!st.empty()) st.pop() ; 
    for(int i = n - 1 ; i >= 0 ; i--) {
        while(!st.empty() && a[st.top()] > a[i]) st.pop() ; 
        
        if(st.empty()) r[i] = n ; 
        else r[i] = st.top() - 1; 
        
        st.push(i) ; 
    }
    int ans = 0 ; 
    for(int i = 0 ; i < n ; i++) {
        if(r[i] - l[i] + 1 >= a[i]) {
            ans = max(ans,a[i]) ; 
        }
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