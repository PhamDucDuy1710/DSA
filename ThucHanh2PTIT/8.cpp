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

ll dtln(int n, const vector<int>& a) {
    vector<int> l(n), r(n);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if(st.empty()) {
        	l[i] = -1 ;
		}
		else {
			l[i] = st.top() ; 
		}
        st.push(i);
    }
    while (!st.empty()) st.pop();
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if(st.empty()) {
        	r[i] = n ; 
		}
		else {
			r[i] = st.top() ;
		}
        st.push(i);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, (ll)a[i]*(r[i] - l[i] - 1));
    }
    return ans;
}

void solve() {
	int m, n;
    if (!(cin >> m >> n)) return ;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = m - a[i]; 
    }
    ll vang = dtln(n, a);
    ll xanh = dtln(n, b);
    cout << max(vang, xanh) << endl;
}

int main() {
    faster();
    int t =1 ; 
//    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
