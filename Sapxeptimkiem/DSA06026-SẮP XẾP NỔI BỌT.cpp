#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] ; 
void solve() {
	cin >> n ; 
	for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
	for(int i = 1 ; i < n - 1 ;i++) {
		bool ok = 1 ; 
		for(int j = 0 ; j < n - i ; j++) {
			if(a[j] > a[j+1]) {
				swap(a[j],a[j+1]) ;
				ok = 0 ; 
			}
		}
		if(ok) break ; 
		cout << "Buoc " << i << ": " ; 
		for(int j = 0 ; j < n ; j++) {
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