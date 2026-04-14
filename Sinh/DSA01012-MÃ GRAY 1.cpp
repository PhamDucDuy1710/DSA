#include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		int n; 
		cin >> n ; 
		vector<string> a ;  
		a.push_back("0") ; 
		a.push_back("1") ; 
		for(int i = 2 ;i <= n ;i++) {
			int l = a.size() ; 
			for(int j = l -1 ; j>= 0 ;j--) {
				a.push_back(a[j]) ; 
			}
			for(int j = 0 ;j < l; j++) {
				a[j] = "0" + a[j] ; 
			}
			for(int j = l ; j < a.size() ; j++) {
				a[j] = "1" + a[j] ; 
			}
		}
		for(auto x : a) {
			cout << x << " " ; 
		}
		cout << "\n" ; 
	}
}