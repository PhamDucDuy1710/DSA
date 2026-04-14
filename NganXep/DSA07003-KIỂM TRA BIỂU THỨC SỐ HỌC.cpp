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
bool check(string s) {
	stack<int> st ; 
	for(char c : s) {
		if(c >= 'a' && c <= 'z') continue ; 
		if(c != ')') st.push(c) ; 
		else {
			if(st.empty() || st.top() == '(') return 0 ; 
			while(st.size() && st.top() != '(') st.pop() ; 
			if(st.empty()) return 0 ; 
			st.pop() ; 
 		}
	} 
	return 1 ;
}
void solve() {
	string s ;
	getline(cin,s) ; 
	if(check(s)) cout << "No\n" ; 
	else cout << "Yes\n" ; 
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