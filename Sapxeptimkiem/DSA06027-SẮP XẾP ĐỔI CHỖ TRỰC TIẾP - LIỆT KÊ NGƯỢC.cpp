#include <bits/stdc++.h>
using namespace std;
int n, a[100] ; 
vector<string> v ; 
void solve() {
	v.clear() ; 
   	cin >> n ; 
    for(int i = 0 ; i < n  ; i++) cin >> a[i] ; 
    for(int i = 0 ; i< n - 1 ;i++) {
    	string s ; 
    	for(int j = i + 1 ; j < n ; j++) {
    		if(a[i] > a[j]) {
    			swap(a[i],a[j]) ; 
			}
		}
		s += "Buoc " + to_string(i+1) + ": " ;  
		for(int j = 0 ; j < n ; j++) {
			s += to_string(a[j]) + " " ; 
		} 
		v.push_back(s) ; 
	}
	reverse(v.begin(),v.end()) ; 
	for(auto x : v) cout << x << "\n" ; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t ;
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}