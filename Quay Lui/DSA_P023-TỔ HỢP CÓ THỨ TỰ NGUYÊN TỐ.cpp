#include<bits/stdc++.h>
using namespace std ; 
int nt(int n) {
	if(n < 2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ;i++) {
		if(n % i ==0) {
			return 0 ; 
		}
	}
	return 1 ; 
}
int n, k , cnt = 0, a[100] ; 
void result() {
	cnt++ ; 
	if(nt(cnt)) {
		cout << cnt << ": " ; 
		for(int i = 1 ;i <= k ;i++) {
			cout << a[i] << " " ; 
		}
		cout << "\n" ; 
	}
}
void Try(int m) {
	for(int i = a[m-1] + 1; i <= n - k + m ;i++) {
		a[m] = i ; 
		if(m == k) result() ; 
		else Try(m + 1) ; 
	}
}
int main() {
	cin >> n >> k ; 
	Try(1) ; 
}