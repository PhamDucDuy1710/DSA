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
	vector<int> a(n+1), b(n+1), c(n+1) ; 
	stack<int> st ; 
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i] ; 
	} 
	for(int i = n  ; i >= 1 ; i--) {
		while(!st.empty() && a[st.top()] <= a[i]) st.pop() ; 

		if(st.empty()) b[i] = -1 ;
		else b[i] = st.top() ; 

		st.push(i) ; 
	}
	while(!st.empty()) st.pop() ; 
	for(int i = n ; i >= 1; i--) {
		while(!st.empty() && st.top() >= a[i]) st.pop() ; 

		if(st.empty()) c[i] = -1 ; 
		else c[i] = st.top() ; 

		st.push(a[i]) ; 
	}

	for(int i = 1 ;i <= n ; i++) {
		if(b[i] == -1) cout << "-1 " ; 
		else cout << c[b[i]] << " " ; 
	}
	cout << "\n" ;
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