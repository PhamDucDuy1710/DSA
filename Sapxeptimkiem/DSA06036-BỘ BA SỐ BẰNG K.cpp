#include<bits/stdc++.h>
using namespace std ;  
void solve() {
	int n, k ; 
	cin >> n >> k ;
	vector<int> a(n) ; 
	for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
	sort(a.begin(),a.end()) ; 
	for(int i = 0 ; i <n -2;i++) {
		for(int j = i+1; j < n - 1 ;j++) {
			if(binary_search(a.begin()+j+1,a.end(),k - a[i]-a[j])) {
				cout << "YES\n" ; 
				return ;  
			}
		}
	}
	cout << "NO\n" ; 	
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