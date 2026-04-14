#include<bits/stdc++.h>
using namespace std ; 
int n, s, p, X[11], cnt ;  
vector<int> prime ; 
vector<string> v ; 
int nt(int n) {
	if(n < 2) return 0;  
	for(int i = 2 ; i <= sqrt(n) ; i++) {
		if(n % i == 0) {
			return 0 ; 
		}
	}
	return 1 ; 
}
void init() {
	for(int i =2; i<= 200; i++) {
		if(nt(i)) prime.push_back(i) ; 
	}
}
void result() {
	cnt++ ; 
	string t ; 
	for(int i = 1; i<= n ; i++) {
		t += to_string(X[i]) + " " ; 
	}
	t.pop_back() ; 
	v.push_back(t) ; 
}
void Try(int i, int idx, int sum) {
	for(int j = idx + 1 ;j < prime.size() ; j++) {
		if(prime[j] <= p) continue ; 
		if(sum + prime[j] > s) continue ; 
		X[i] = prime[j] ; 
		if(i == n && sum + prime[j] == s) result() ; 
		else Try(i+1,j,sum + prime[j]) ; 
	}
}
void solve() {
	cin >> n >> p >> s ;
	cnt = 0 ; 
	Try(1,0,0) ; 
	sort(v.begin(),v.end()) ; 
	cout << cnt << "\n" ;
	for(auto x : v) {
		cout << x << "\n" ; 
	}
	v.clear() ; 
}
int main() {
	init() ; 
	int t ;
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}