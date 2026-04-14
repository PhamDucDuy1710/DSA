#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] ; 
bool chuaxet[100] ; 
string s ; 
char b[100] ; 
void result() {
	for(int i = 1 ; i <= n ; i++) {
		cout << b[a[i]] ; 
	}
	cout << " " ; 
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
	cin >> s ; 
	n = s.size() ; 
	for(int i = 0 ; i < n ; i++) {
		b[i+1] = s[i] ;  
	}
	memset(chuaxet,true,sizeof(chuaxet)) ; 
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