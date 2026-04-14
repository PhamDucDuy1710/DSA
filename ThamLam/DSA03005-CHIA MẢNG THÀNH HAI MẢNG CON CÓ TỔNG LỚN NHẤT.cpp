#include<bits/stdc++.h>
using namespace std ;
int main() {
	int t ; 
	cin >> t ;
	while(t--) {
		int n, k ; 
	cin >> n >> k ; 
	int a[n] ; 
	for(int i = 0 ; i < n ;i++) {
		cin >> a[i]; 
	}
	if(k < n - k) {
		sort(a,a+n) ;
	int x = 0, y = 0 ; 
	for(int i = 0 ; i < k ; i++) {
		x += a[i] ;
	}
	for(int i = k ; i < n ; i++) {
		y  += a[i] ; 
	}
	cout << y - x  << "\n" ; 
	}
	else {
		sort(a,a+n) ;
		reverse(a,a+n) ; 
	int x = 0, y = 0 ; 
	for(int i = 0 ; i < k ; i++) {
		x += a[i] ;
	}
	for(int i = k ; i < n ; i++) {
		y  += a[i] ; 
	}
	cout << abs(x-y) << "\n" ; 
	}
	
	}
}