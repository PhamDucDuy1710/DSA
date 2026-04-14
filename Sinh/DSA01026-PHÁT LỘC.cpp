#include<bits/stdc++.h>
using namespace std ; 
int n, a[100] = {0} ;  
void result() {
	string s ; 
	for(int i =1 ; i <= n ;i++) {
		if(a[i] == 1) s += '8' ; 
		else s += '6' ;	
 	}

	if(s[0] == '8' && s[n-1] == '6' && s.find("88") == string::npos && s.find("6666") == string::npos) {
		cout << s << "\n" ; 
	}
}
void Try(int m) {
	for(int i = 0 ; i <= 1 ; i++) {
		a[m] = i ; 
		if(m == n) result() ; 
		else Try(m + 1) ; 
	}
}
int main() {
	cin >> n ; 
	Try(1) ;
}