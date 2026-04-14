#include<bits/stdc++.h>
using namespace std ; 
void solve() {
	string s; 
	cin >> s ; 
	int b[26] = {} ; 
	int maxx = 0 ; 
	for(char x : s) {
		b[x -'a']++ ; 
		maxx = max(maxx,b[x- 'a']) ; 
	}
	if(maxx <= (s.length() + 1)/ 2) cout << "1\n" ; 
	else cout << "-1\n" ; 
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