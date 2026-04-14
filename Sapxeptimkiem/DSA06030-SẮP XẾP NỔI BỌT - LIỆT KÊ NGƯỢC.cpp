#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] ; 
vector<string> v ; 
void solve() {
	v.clear() ; 
	cin >> n ; 
	for(int i = 0 ; i< n ; i++) cin >> a[i] ; 
	for(int i = 1 ; i < n - 1 ;i++) {
		string s ;
		bool ok = 1 ; 
		for(int j = 0 ; j < n - i ; j++) {
			if(a[j] > a[j+1]) {
				swap(a[j],a[j+1]) ;
				ok = 0 ; 
			}
		}
		if(ok) break ; 
		s += "Buoc " + to_string(i) + ": " ; 
		for(int j = 0 ; j < n ; j++) {
			s += to_string(a[j]) + " "  ;
		}
		v.push_back(s) ; 
	}
	reverse(v.begin(),v.end()) ; 
	for(auto x : v) cout << x << "\n" ;
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