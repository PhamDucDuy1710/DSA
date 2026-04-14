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
	vector<ll> a(n), b(n) ; 
	stack<ll> st ; 
	for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
	for(int i = n - 1 ; i >= 0 ; i--) {
		while(!st.empty() && st.top() <= a[i]) st.pop() ; 
		
		if(st.empty()) b[i] = -1  ;
		else b[i] = st.top() ; 

		st.push(a[i]) ; 
	}
	for(auto x : b) {
		cout << x << " " ;
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