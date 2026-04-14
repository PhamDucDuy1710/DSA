#include<bits/stdc++.h>
using namespace std ; 
int n, a[100], b[100] ; 
bool chuaxet[100] ; 
void result() {
	for(int i = 1 ; i <= n ;i++) {
		cout << b[a[i]] << " " ; 
	}
	cout << "\n" ; 
}
void Try(int m) {
	for(int i= 1 ; i <= n ;i++) {
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
	memset(chuaxet,true,sizeof(chuaxet)) ; 
	cin >> n ; 
	for(int i = 1 ; i <= n ;i++) cin >> b[i] ; 
	sort(b+1,b+n+1) ; 
	Try(1) ;
}