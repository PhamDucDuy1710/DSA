#include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t = 1 ; 
//	cin >> t ;
	while(t--) {
		int n; 
		cin >> n ; 
		vector<int> a(n) ; 
		for(int i = 0 ; i <n ;i++) cin >> a[i] ; 
		sort(a.begin(),a.end()) ; 
		vector<int> v ; 
		v.push_back(a[0]*a[1]) ; 
		v.push_back(a[0]*a[1]*a[n-1]) ; 
		v.push_back(a[n-1]*a[n-2]) ; 
		v.push_back(a[n-1]*a[n-2]*a[n-3]) ; 
		sort(v.rbegin(),v.rend()) ; 
		cout << v[0] << "\n" ; 
	}
}