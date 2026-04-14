#include<bits/stdc++.h>
using namespace std ; 
int n, a[1005] ; 
void solve() {
	cin >> n ; 
	for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
	int ans = 0 ; 
	for(int i = 0 ; i < n ; i++) {
		int k = i ; 
		for(int j = i+ 1 ; j < n ; j++) {
			if(a[j] < a[k]) {
				k = j ; 
			}
		}
		if(k != i) {
			ans++ ; 
			swap(a[k],a[i]) ; 
		}
	}
	cout << ans << "\n" ; 
}

int main() {
	ios::sync_with_stdio(false) ; 
	cin.tie(nullptr) ; 
	int t ;
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}