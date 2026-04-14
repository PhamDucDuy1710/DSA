#include<bits/stdc++.h>
using namespace std ; 
int n, a[100006], l[1000006], r[1000006] ; 
void solve() {
	cin >> n ; 
	for(int i = 1 ; i <= n; i++) {
		cin >> a[i] ; 
	}
	for(int i = 1 ; i<= n ;i++) {
		if(a[i] > a[i-1]) {
			l[i] = l[i-1] + 1 ; 
		}
		else {
			l[i] = 1 ; 
		}
	}
	for(int i =n ; i>= 1; i--) {
		if(a[i] > a[i+1]) {
			r[i] = r[i+1] + 1 ;
		}
		else {
			r[i] = 1 ; 
		}
	}
	int maxx= 0 ; 
	for(int i = 1; i <= n ;i++) {
		maxx = max(l[i] + r[i] - 1,maxx) ; 
	}
	cout << maxx << "\n" ; 
}

int main() {
	ios::sync_with_stdio(false) ; 
	cin.tie(nullptr) ; 
	int t; 
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}