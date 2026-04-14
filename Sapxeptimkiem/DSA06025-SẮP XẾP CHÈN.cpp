#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] ; 
void solve() {
	cin >> n ; 
	for(int i =0 ;i < n ;i++) cin >> a[i] ; 
	for(int i= 0; i <n ; i++) {
		int j = i ; 
		while(j > 0 && a[j-1] > a[j]) {
			swap(a[j],a[j-1]) ; 
			j-- ; 
		}
		cout << "Buoc " << i << ": " ; 
		for(int j = 0 ; j <= i ;j++) {
			cout << a[j] << " " ; 
		}
		cout << "\n" ; 
	}
}

int main() {
	ios::sync_with_stdio(false) ; 
	cin.tie(nullptr) ;
	int t = 1; 
	while(t--) {
		solve() ; 
	}
}