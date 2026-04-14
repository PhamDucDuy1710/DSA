#include<bits/stdc++.h>
using namespace std ; 

int n, k, a[10005] ; 

void Try() {	
	int i = k ; 
	while(i > 0 && a[i] - a[i-1] == 1) {
		i-- ; 
	}
	if(i > 0) {
		a[i]-- ; 
		for(int j = i+1 ; j <= k ; j++) {
			a[j] = n - k + j ; 
		}
	}
	else {
		for(int i = 1 ; i<= k ;i++) {
			a[i] = n - k + i ; 
		}
	}
}

int main() {
	int t ;
	cin >> t ;
	while(t--) {
		cin >> n >> k ; 
		for(int i = 1 ; i <= k ;i++) cin >> a[i] ; 
		Try() ; 
		for(int i = 1 ;i <= k ;i++) {
			cout << a[i] << " " ; 
		} 
		cout << "\n" ; 
	}
}