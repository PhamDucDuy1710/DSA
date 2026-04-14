#include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t; 
	cin >> t ;
	while(t--) {
		int n, s, m ; 
		cin >> n >> s >> m ; 
		if(n < m || 6*(n-m) < m) {
			cout << "-1\n" ; 
			continue ; 
		}
		cout << ceil((float) m * s / n) << "\n"  ; 
	}
}