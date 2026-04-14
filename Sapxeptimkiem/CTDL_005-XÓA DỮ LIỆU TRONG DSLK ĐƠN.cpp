#include<bits/stdc++.h> 
using namespace std ;
int main() {
	int n, x ; 
	cin >> n ; 
	int a[n] ; 
	for(int i = 0 ; i < n ;i++) cin >> a[i] ;
	cin >> x ; 
	vector<int> v ; 
	for(int i = 0 ; i < n ;i++) {
		if(a[i] != x) {
			v.push_back(a[i]) ; 
		}
	}
	for(int i = 0 ; i < v.size() ;i++) {
		cout << v[i] << " " ; 
	}
}