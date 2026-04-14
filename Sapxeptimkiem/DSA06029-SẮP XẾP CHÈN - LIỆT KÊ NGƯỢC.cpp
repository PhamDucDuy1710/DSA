#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] ; 
vector<string> v ;
void solve() {
	v.clear() ; 
	cin >> n ; 
	for(int i =0 ;i < n ;i++) cin >> a[i] ; 
	for(int i= 0; i <n ; i++) {
		string s ;
		int j = i ; 
		while(j > 0 && a[j-1] > a[j]) {
			swap(a[j],a[j-1]) ; 
			j-- ; 
		}
		s += "Buoc " + to_string(i) + ": " ; 
		for(int j = 0; j<= i;j++) {
			s += to_string(a[j]) + " " ; 
		}
		v.push_back(s) ;
	}
	reverse(v.begin(),v.end()) ; 
	for(auto x : v) cout << x << "\n" ;
}

int main() {
	ios::sync_with_stdio(false) ; 
	cin.tie(nullptr) ;
	int t = 1; 
	while(t--) {
		solve() ; 
	}
}