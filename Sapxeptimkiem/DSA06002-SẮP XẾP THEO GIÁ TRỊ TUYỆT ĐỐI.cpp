#include<bits/stdc++.h>
using namespace std ; 
int n, k ; 
struct Dt {
	int id, val ; 
};
bool cmp(Dt a, Dt b) {
	if(abs(a.val - k) < abs(b.val -k)) return 1 ; 
	if(abs(a.val - k) == abs(b.val -k)) {
		if(a.id < b.id) return 1 ; 
	}
	return 0 ; 
}
void solve() {
	cin >> n >> k ;
	Dt a[n] ; 
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i].val ; 
		a[i].id = i ; 
	}
	sort(a,a+n,cmp) ; 
	for(auto x : a) {
		cout << x.val << " " ; 
	}
	cout << "\n" ; 
}
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}