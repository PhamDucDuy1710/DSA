#include<bits/stdc++.h>
using namespace std ; 
void solve() {
	int d ; 
	cin >> d ; 
	string s; 
	cin >> s ; 
	int b[127] = {} ;
	int maxx = 0  ;
	for(char x : s) {
		b[x]++ ;
		maxx = max(maxx,b[x]) ; 
	}
	if(maxx <= ceil((float)s.length() / d)) cout << "1\n" ; 
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