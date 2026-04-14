#include<bits/stdc++.h> 
using namespace std ; 
int n, k, a[100] ; 
void result() {
	int cnt = 0 ; 
	for(int i = 1 ; i <= n ; i++) {
		if(a[i] == 0) cnt++ ; 
		else cnt = 0 ; 
		
		if(cnt > k) continue ; 
		if(cnt == k) dem++ ; 
	}
	if(dem == 1) {
		cou++ ; 
		for(int i= 1 ; i <= n ;i++) {
			cout << a[i] << " " ; 
		}
		cout << "\n" ; 
	}
}
void Try(int m) {
	for(int i= 0; i <= 1; i++) {
		a[m] = i ; 
		if(m == n) result() ; 
		else Try(m + 1) ; 
	}
}
int main() {
	int t; 
	cin >> t ;
	while(t--) {
		cin >> n >> k ; 
		Try(1) ; 
	}
}