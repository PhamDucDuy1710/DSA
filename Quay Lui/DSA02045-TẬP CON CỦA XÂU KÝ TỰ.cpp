#include<bits/stdc++.h>
using namespace std ; 
int n; 
string s ; 
void Try(int i, int idx, string x) {
	for(int j = idx + 1 ; j < s.size() ; j++) {
		cout << x + s[j] << " " ; 
		Try(i+1,j,x + s[j]) ; 
	}
}
void solve() {
	cin >> n >> s ; 
	sort(s.begin(),s.end()) ; 
	Try(1,-1, "") ; 
}
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		solve() ; 
		cout << "\n" ; 
	}
}