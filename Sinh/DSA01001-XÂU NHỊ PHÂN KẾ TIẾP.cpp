#include<bits/stdc++.h>
using namespace std ;
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		string s; 
		cin >> s ;
		int i = s.length() - 1 ; 
		while(s[i] == '1') {
			s[i] = '0' ; 
			i-- ; 
		}
		if(i < 0) {
			for(int j = 0 ; j < s.length() ;j++) {
				cout << s[j] ;
			}
			cout << "\n" ; 
		}
		else {
			s[i] = '1' ; 
			for(int j = 0 ; j < s.length() ; j++) {
				cout << s[j] ; 
			}
			cout << "\n" ; 
		}
	}
}