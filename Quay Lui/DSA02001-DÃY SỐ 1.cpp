#include <bits/stdc++.h>
using namespace std;
int n, a[100] ; 
void result(int n) {
	cout << "[" ;
	for(int i = 1 ;i < n; i++) {
		cout << a[i] << " " ; 
	}
	cout << a[n] << "]\n" ; 
	 
}
void Try(int m) {
	result(m) ; 
	for(int i = 1 ; i < m; i++) a[i] += a[i+1] ; 
	if(m-1) Try(m-1) ; 
}
void solve() {
	cin >> n ; 
	for(int i = 1; i <= n ; i++) cin >> a[i] ; 
	Try(n) ; 
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