#include<bits/stdc++.h>
using namespace std ; 
string s;
char c[2] = {'+', '-'} ; 
bool ok; 
bool  check() {
	int a = (s[0] -'0')*10 + s[1] - '0' ; 
	int b = (s[5] -'0')*10 + s[6] - '0' ; 
	int c = (s[10] -'0')*10 + s[11] - '0' ;
	if(a < 10 || b < 10 || c < 10) {
		return 0 ; 
	}
	if(s[3] == '+') {
		return a + b == c ;
	}
	else return a - b == c ; 
} 
void Try(int i) {
	if(ok) return ; 
	if(i == s.size()) {
		if(check()) {
			ok = 1; 
			cout << s << "\n" ; 
		}
		return ;
	}
	if(s[i] == '?') {
		if(i == 3) {
			for(int j = 0 ; j <= 1 ;j++) {
				s[i] = c[j] ; 
				Try(i+1) ; 
			}
		}
		else {
			for(int j = 0 ; j <= 9; j++) {
				s[i] = j + '0' ; 
				Try(i+1) ; 
			}
		}
		s[i] = '?' ; 
	}
	else {
		Try(i+1) ; 
	}
}
void solve() {
	ok = 0 ; 
	getline(cin,s) ; 
	for(int i = 0 ; i < s.size() ; i++) {
		if(s[i] == '*' || s[i] == '/') {
			cout << "WRONG PROBLEM!" << "\n" ; 
			return ;
		}
	}
	Try(0) ; 
	if(!ok) cout << "WRONG PROBLEM!" << "\n" ;
}
int main() {
	int t ;
	cin >> t ;
	cin.ignore() ; 
	while(t--) {
		solve() ; 
	}
}