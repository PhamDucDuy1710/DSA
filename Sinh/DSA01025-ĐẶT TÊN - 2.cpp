#include<bits/stdc++.h>
using namespace std ; 
int n, k, a[100] ; 
void result() {
	for(int i = 1 ; i <= k ;i++) {
		cout << (char)('A' + a[i] - 1) ;  
	}
	cout << "\n" ; 
}
void Try(int m) {
	for(int i = a[m-1] + 1 ; i <= n - k + m ; i++) {
		a[m] = i ; 
		if(m == k) result() ; 
		else Try(m + 1) ; 
	}
}
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		cin >> n >> k ; 
		Try(1) ; 
	}
}