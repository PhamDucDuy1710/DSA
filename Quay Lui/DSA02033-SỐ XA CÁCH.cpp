#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] ; 
bool chuaxet[100] ; 
void result() {
	bool ok = 0 ; 
	for(int i = 1 ;i< n ; i++) {
		if(abs(a[i]- a[i+1]) == 1) {
			ok = 1 ;
			break ; 
		}
	}
	if(!ok) {
		for(int i = 1 ; i <= n ;i++) {
			cout << a[i] ;  
		}
		cout << "\n" ; 
	} 
}
void Try(int m) {
	for(int i = 1 ; i <= n ; i++) {
		if(chuaxet[i]) {
			chuaxet[i] = false ; 
			a[m] = i ; 
			if(m == n) result() ; 
			else Try(m + 1) ; 
			chuaxet[i] = true ; 
		}
	}
}
void solve() {
	memset(chuaxet,true,sizeof(chuaxet)) ; 
	cin >> n ; 
	Try(1) ; 
 	cout << "\n" ;  
 }
int main() {
	ios::sync_with_stdio(0) ; 
	cin.tie(0) ; 
	int t ;
	cin >> t ;
	while(t--) {
		solve() ;
	}
}