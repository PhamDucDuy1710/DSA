#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] , chuaxet[100] ; 
int cnt = 1 ;
void result() {
	cout << cnt << ": " ; 
	cnt++ ; 
	for(int i = 1 ; i <= n ;i++) {
		cout << a[i] << " " ; 
	}
	cout << "\n"  ;
}
void Try(int m) {
	for(int i = 1 ; i <= n ;i++) {
		if(chuaxet[i]) {
			a[m] = i ;
			chuaxet[i] = false ; 
			if(m == n) result() ; 
			else Try(m + 1) ; 
			chuaxet[i] = true ; 
		}
	}
}
int main() {
	memset(chuaxet, true, sizeof(chuaxet)) ; 
	cin >> n ; 
	Try(1) ; 
}