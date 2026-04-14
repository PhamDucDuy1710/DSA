#include<bits/stdc++.h>
using namespace std ; 

void solve() {
	int n ; 
	cin >> n ; 
	int a[n] ; 
	set<int> s ; 
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i] ; 
		s.insert(a[i]) ; 
	}
	vector<int> v(s.begin(), s.end());
    cout << (v.back() -v.front() + 1) - v.size();
    cout << "\n" ; 
}
int main() {
	ios::sync_with_stdio(0) ; 
	cin.tie(0) ; 
	int t ;
	cin >> t ;
	while(t--) {
		solve() ;
	}
}