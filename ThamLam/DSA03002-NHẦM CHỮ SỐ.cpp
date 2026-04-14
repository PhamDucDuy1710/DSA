#include<bits/stdc++.h>
using namespace std ; 
int Max(string a, string b) {
	for(int i = 0 ;i < a.size() ;i++) {
		if(a[i] == '5') {
			a[i] = '6' ; 
		}
	}
	for(int i = 0 ;i < b.size() ;i++) {
		if(b[i] == '5') {
			b[i] = '6' ; 
		}
	}
	int x = stoi(a) ; 
	int y = stoi(b) ; 
	return x + y ; 
}
int Min(string a, string b) {
	for(int i = 0 ;i < a.size() ;i++) {
		if(a[i] == '6') {
			a[i] = '5' ; 
		}
	}
	for(int i = 0 ;i < b.size() ;i++) {
		if(b[i] == '6') {
			b[i] = '5' ; 
		}
	}
	int x = stoi(a) ; 
	int y = stoi(b) ; 
	return x + y ; 
}
int main() {
	string a, b ; 
	cin >> a >> b ; 
	cout << Min(a,b) << " " << Max(a,b) ; 
}