#include<bits/stdc++.h>
using namespace std ; 
int n, k, a[25], X[25], cnt ; 
vector<string> v ;
bool ok ; 
void result(int m) {
	ok =1 ;
	cnt++ ; 
	string s ;
	s += "{" ; 
	for(int i = 1 ; i < m ; i++) {
		s += to_string(X[i]) + " " ; 
	}
	s += to_string(X[m]) + "}" ; 
	v.push_back(s) ; 
}
void Try(int i, int idx, int sum) {
	for(int j = idx ; j <= n ; j++) {
		if(sum + a[j] > k) continue ; 
		X[i] = a[j] ; 
		if(sum + a[j] == k) result(i) ; 
		else Try(i+1,j,sum+a[j]) ; 
	}
}
void solve() {
	cnt = 0 ; 
	ok = 0 ; 
	cin >> n >> k ; 
	for(int i = 1 ;i <= n ; i++) cin >> a[i]; 
	sort(a+1,a+1+n) ; 
	Try(1,1,0) ;  
	if(ok) {
		cout << cnt << " " ; 
		for(auto x : v) {
			cout << x << " " ; 
		} 
	}
	else {
		cout << "-1" ; 
	}
	v.clear() ; 
	cout << "\n" ; 
}
int main() {
	int t; 
	cin >> t ; 
	while(t--) {
		solve() ; 
	}
}