#include <bits/stdc++.h>
using namespace std;
int n, k, a[11], X[11] ; 
int cnt = 0 ; 
vector<string> v ; 
void result(int m) {
	string s ; 
	cnt++ ; 
	for(int i = 1 ; i <= m ;i++) {
		s += to_string(X[i]) + " " ; 
	}
	s.pop_back() ; 
	v.push_back(s) ; 
}
void Try(int i, int sum, int idx) {
	for(int j = idx + 1; j <= n ;j++) {
		if(sum + a[j] > k) continue ; 
		X[i] = a[j] ; 
		if(sum + a[j] == k) result(i) ; 
		else Try(i+1,sum+a[j],j) ; 
	}
}
void solve() {
	cin >> n >> k ; 
	for(int i = 1 ; i <= n ; i++) cin >> a[i] ; 
	sort(a+1,a+n+1) ;  
	Try(1,0,0) ; 
	reverse(v.begin(),v.end()) ; 
	for(auto x : v) {
		cout << x << "\n" ; 
	}
	cout << cnt << "\n" ; 
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t = 1 ; 
	while(t--) {
		solve() ; 
		cout << "\n" ; 
	}
}