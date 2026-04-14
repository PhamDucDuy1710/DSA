#include<bits/stdc++.h>
using namespace std ; 
int n, a[11],  X[11] , cnt ; 
vector<string> v ;
void init() {
	for(int i = 1 ; i<= n ;i++) {
		a[i] = i ; 
	}
}
void result(int m) {
	cnt++ ; 
	string s; 
	s += "(" ; 
	for(int i = 1; i <  m  ;i++) {
		s += to_string(X[i]) + " " ; 
	}
	s += to_string(X[m]) + ")" ; 
	v.push_back(s) ; 
}
void Try(int i, int idx, int sum) {
	for(int j = idx ; j >= 1 ;j--) {
		if(sum + a[j] > n) continue ; 
		X[i] = a[j] ; 
		if(sum + a[j] == n) result(i) ; 
		else Try(i+1,j,sum + a[j]) ; 
	}
} 
void solve() {
	cnt = 0 ; 
	cin >> n ; 
	init() ; 
	Try(1,n,0) ; 
	cout << cnt << "\n" ; 
	for(auto x : v) {
		cout << x << " " ; 
	}
	cout << "\n" ;
	v.clear() ; 
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve() ; 
	}
}