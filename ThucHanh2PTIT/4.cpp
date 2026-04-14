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
	 string s;
        getline(cin, s);
        int n = s.size();
        vector<string> res(n); 
        stack<int> st;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
                res[i] = ""; 
            }
            else if (s[i] == ')') {
                if (!st.empty()) {
                    int j = st.top(); st.pop();
                    res[j] = "0";
                    res[i] = "1";
                } else {
                    res[i] = "-1";
                }
            }
            else {
                res[i] = string(1, s[i]); 
            }
        }
        while (!st.empty()) {
            res[st.top()] = "-1";
            st.pop();
        }
        for (int i = 0; i < n; i++) {
            cout << res[i];
        }
        cout << '\n';
}


int main() {
    faster();
    int t;
    cin >> t;
    cin.ignore() ; 
    while(t--) {
        solve();
    }
    return 0;
}
