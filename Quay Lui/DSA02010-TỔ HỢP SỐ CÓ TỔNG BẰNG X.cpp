#include <bits/stdc++.h>
using namespace std;
int n, k, a[25], X[25] ; 
bool ok;  
void result(int m) {
	ok = 1 ; 
	cout << "[" ; 
	for(int i = 1 ; i < m;i++) cout << X[i] << " " ; 
	cout << X[m] << "]" ; 
}
void Try(int i, int sum, int idx) {
	for(int j = idx ; j <= n ;j++) {
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
	ok = 0 ;  
	Try(1,0,1) ; 
	if(!ok) cout << -1 ; 
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t ; 
	cin >> t; 
	while(t--) {
		solve() ; 
		cout << "\n" ; 
	}
}