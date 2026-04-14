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
    vector<int> a(n+1), l(n+1), r(n+1) ; 
    stack<int> st ;
    for(int i = 1 ; i <= n ; i++) cin >> a[i] ; 
    for(int i = 1 ; i <= n ; i++) {
        while(!st.empty() && a[st.top()] >= a[i]) {
            st.pop() ; 
        }

        if(st.empty()) l[i] = 1 ; 
        else l[i] = st.top() + 1 ;

        st.push(i) ; 
    } 
    while(!st.empty()) st.pop() ; 
    for(int i = n ; i >= 1; i--) {
        while(!st.empty() && a[st.top()] >= a[i]) st.pop() ; 
        
        if(st.empty()) r[i] = n ; 
        else r[i] = st.top() - 1 ; 

        st.push(i) ; 
    }
    ll ans = 0 ;
    for(int i = 1 ; i <= n ; i++) {
        ll s = (ll)a[i] * (r[i] - l[i] +1) ; 
        ans = max(ans,s) ; 
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