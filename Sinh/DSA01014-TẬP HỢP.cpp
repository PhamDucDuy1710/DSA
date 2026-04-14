#include<bits/stdc++.h>
using namespace std ; 
int n, k, s, a[100], ans ; 
void result() {
	int sum = 0 ; 
	for(int i = 1 ; i <= k ;i++) {
		sum += a[i] ; 
	}
	if(sum == s) ans++ ; 
}
void Try(int m) {
	for(int i = a[m-1] + 1 ; i <= n - k + m ; i++) {
		a[m] = i ; 
		if(m == k) result() ; 
		else Try(m +1 ) ;
	}
}
int main() {
	while(1) {
		cin >> n >> k >> s; 
		if(n == 0 && k == 0 && s == 0) break ; 
		ans = 0 ; 
		Try(1) ; 
		cout << ans << "\n" ; 
	}
}