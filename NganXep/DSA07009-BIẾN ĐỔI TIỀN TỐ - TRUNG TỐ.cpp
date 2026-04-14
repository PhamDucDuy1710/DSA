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
	stack<string> st ; 
	for(int i = s.size() - 1; i >= 0 ; i--) {
		if(isalpha(s[i])) {
			st.push(string(1,s[i])) ; 
		}
		else {
			string t1 = move(st.top()) ; st.pop() ; 
			string t2 = move(st.top()) ; st.pop() ; 

			string tmp ; 
			tmp.reserve(t1.size() + t2.size() + 3) ; 
			tmp.push_back('(') ; 
			tmp += t1 ; 
			tmp.push_back(s[i]) ; 
			tmp += t2 ; 
			tmp.push_back(')') ; 
			st.push(move(tmp)) ;
		}
	}
	cout << st.top() << "\n" ; 
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