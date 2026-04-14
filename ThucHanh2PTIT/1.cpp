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
	string s ; 
	cin >> s ;
	stack<int> st ; 
	for(int i = 0 ; i <= s.size();i++) {
		st.push(i+1) ; 
		if(i == s.size() || s[i] == 'I') {
			while(!st.empty()) {
				cout << st.top() ;
				st.pop() ; 
			}
		}
	}
}

int main() {
    faster();
    int t, i = 0; 
    cin >> t;
    while(t--) {
    	i++ ; 
    	cout << "Test " << i << ": " ; 
        solve();
        cout << "\n" ; 
    }
    return 0;
}
