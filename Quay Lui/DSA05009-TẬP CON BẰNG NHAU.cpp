#include <bits/stdc++.h>
using namespace std;
int n, k,  a[101] ; 
bool ok ; 
void Try(int sum, int idx) {
	if(ok) return ; 
	for(int j = idx +1 ;j <= n ; j++) {
		if(sum + a[j] > k) continue ; 
		if(sum + a[j] == k) {
			ok = 1 ;
			return ; 
		}
		Try(sum + a[j],j) ; 
	}
}
void solve() {
	cin >> n ; 
	k = 0 ; 
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i] ; 
		k += a[i] ; 
	}
	if(k % 2 == 1) {
		cout << "NO\n" ; 
		return ; 
	}
	else {
		k = k / 2 ; 
		ok = 0 ; 
		Try(0,0) ; 
		if(ok) cout << "YES\n"  ;
		else cout << "NO\n" ; 
	}
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t ; 
	cin >> t; 
	while(t--) {
		solve() ; 
	}
}