#include <bits/stdc++.h>
using namespace std;
int n, a[100] ; 
vector<string> v ; 
void result(int n) {
	string s; 
	s += "[" ; 
	for(int i = 1; i < n ;i++) {
		s += to_string(a[i]) + " "; 
	} 
	s += to_string(a[n]) + "]";
	v.push_back(s) ; 
}
void Try(int n) {
	result(n) ; 
	for(int i = 1 ; i < n ; i++) a[i] += a[i+1] ;
	if(n-1) Try(n-1) ; 
}
void solve() {
	cin >> n ; 
	for(int i = 1 ; i <= n ; i++) cin >> a[i] ; 
	Try(n) ; 
	reverse(v.begin(), v.end()) ; 
	for(auto x : v) {
		cout << x << " " ; 
	}
	cout << "\n" ; 
	v.clear() ; 
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t ; 
	cin >> t; 
	while(t--) {
		solve() ; 
	}
}