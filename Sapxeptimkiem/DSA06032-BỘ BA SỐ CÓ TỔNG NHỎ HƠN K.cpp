#include<bits/stdc++.h>
using namespace std ; 
int n, k ; 
void solve() {
	long long ans = 0 ; 
	cin >> n >> k ; 
	vector<long long> a(n) ; 
	for(int i = 0 ; i < n ;i++) {
		cin >> a[i] ; 
	} 
	sort(a.begin(),a.end()) ; 
	for(int i = 0 ; i < n ; i++) {
		for(int j = i  + 1 ;j < n ; j++) {
			long long x = k - a[i] - a[j] ; 
			ans += lower_bound(a.begin() +j +1,a.end(),x) - (a.begin() + j + 1) ; 
		}
	}
	cout << ans << "\n" ; 
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