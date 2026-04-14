#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] ; 
void solve() {
	cin >> n ; 
	for(int i = 0 ; i < n  ; i++) cin >> a[i] ; 
	for(int i = 0 ; i < n -1 ; i++) {
		int idx = i ;
		for(int j = i + 1 ;j < n ; j++) {
			if(a[j] < a[idx]) {
				idx = j ; 
			}
		}
		swap(a[i],a[idx]) ; 
		cout << "Buoc " << i+ 1 << ": " ; 	
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