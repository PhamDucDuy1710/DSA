#include<bits/stdc++.h>
using namespace std ; 

void solve() {
	int n , m ; 
	cin >> n >> m ; 
	vector<int> v ; 
	for(int i = 0 ; i < n ; i++) {
		int x ; 
		cin >> x ; 
		v.push_back(x) ; 
	}  
	for(int i  =0 ; i < m ;i++) {
		int x; 
		cin >> x ; 
		v.push_back(x) ; 
	} 
	sort(v.begin(), v.end()) ; 
	for(auto x : v) {
		cout << x << " " ; 
	} 
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