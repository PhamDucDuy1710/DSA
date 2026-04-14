#include<bits/stdc++.h>
using namespace std ; 
bool cmp(pair<int,int> a, pair<int,int> b) {
	if(a.second > b.second) return 1 ;
	if(a.second == b.second) {
		if(a.first < b.first) return 1 ;
	}
	return 0 ;  
}

void solve() {
	int n ;
	cin >> n ; 
	int a[n] ;
	map<int,int> m ; 
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i] ; 
		m[a[i]]++ ; 
	}
	vector<pair<int,int>> v ; 
	for(auto x : m) {
		v.push_back(make_pair(x.first,x.second)) ; 
	}
	sort(v.begin(), v.end(),cmp) ;
	for(auto x : v) {
		while(x.second) {
			cout << x.first << " " ; 
			x.second-- ; 
		}
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