#include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t; 
	cin >> t ;
	while(t--) {
		int n; 
		cin >> n ; 
		int a[n+1] ; 
		bool ok = 0 ; 
		for(int i = 1 ;i <= n ;i++) cin >> a[i] ; 
		for(int i = 1 ; i <= n ; i++) {
			if(a[i] != i  && a[i] != n - i + 1) {
				ok = 1 ;
				cout << "No\n" ; 
				break ; 
			}
		}
		if(!ok) cout << "Yes\n" ; 
	}
}