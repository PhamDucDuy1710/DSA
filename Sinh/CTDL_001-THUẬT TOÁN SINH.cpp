#include<bits/stdc++.h>
using namespace std ;
int n, a[100] ; 
int check(int n, int a[]) {
	for(int i = 1 ; i <= n ;i++) {
		if(a[i] != a[n - i + 1]) return 0 ; 
	}
	return 1 ; 
}
void result() {
	if(check(n,a)) {
		for(int i = 1 ; i <= n ;i++) {
			cout << a[i] << " " ;
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
	cin >> n ; 
	Try(1) ; 
}
