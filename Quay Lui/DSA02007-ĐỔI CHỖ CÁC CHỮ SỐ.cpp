#include<bits/stdc++.h>
using namespace std ;
string s, t ; 
void Try(int i, int k) {
	if(k == 0 || i == s.size()) return ; 
	char m = *max_element(s.begin() + i, s.end()) ; 
	if(m == s[i]) Try(i+1,k) ; 
	for(int j = i+ 1; j <s.size() ; j++) {
		if(m != s[j]) continue ; 
		swap(s[i],s[j]) ; 
		if(t < s) t = s; 
		if(i < s.size() -1) Try(i +1,k -1 ) ; 
		swap(s[i],s[j]) ; 
	}
	
}
void solve() {
	int k ; 
	cin >> k ; 
	cin >> s ; 
	t = s ; 
	Try(0,k); 
	cout << t << "\n" ; 
}
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}