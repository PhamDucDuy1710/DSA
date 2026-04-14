#include<bits/stdc++.h>
using namespace std ;
int n, a[100], k; 
int cnt ; 
void result() {
	cnt++ ;
	if(cnt % k == 1) {
		for(int i = 1 ; i <= n ;i++) {
			cout << a[i] ;
		}
		cout << "\n" ; 
	}
}
void Try(int m) {
	for(int i = 0 ; i <= 1 ; i++) {
		a[m] = i ; 
		if(m == n) result() ; 
		else Try(m + 1) ; 
	}
}
int main() {
	cin >> n >> k ; 
	cnt = 0 ; 
	Try(1) ; 
}
