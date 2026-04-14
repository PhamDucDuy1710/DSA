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
	int n, q;
    cin >> n >> q;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> v(n + 1, 0);
    stack<int> st;
    for (int i = n; i >= 1; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (!st.empty()) {
            v[i] = st.top();
        }
        st.push(i);
    }
    vector<int> res(n + 1, 0);
    for (int i = n; i >= 1; i--) {
        if (v[i] != 0) {
            res[i] = 1 + res[v[i]];
        } else {
            res[i] = 0;
        }
    }
    while (q--) {
        int x;
        cin >> x;
        cout << res[x] << "\n";
    }

}

int main() {
    faster();
    int t = 1 ; 
//    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
