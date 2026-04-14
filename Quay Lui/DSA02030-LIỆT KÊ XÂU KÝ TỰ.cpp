#include <bits/stdc++.h>
using namespace std;
char c; 
int k ; 
string s; 
void Try(char i) {
	for(char j = i ; j <= c ; ++j) {
		s.push_back(j) ; 
		if(s.length() == k) cout << s << "\n" ; 
		else Try(j) ; 
		s.pop_back() ; 
	}
}
void solve() {
    cin >> c >> k ; 
	Try('A') ;  
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t  = 1 ; 
//	cin >> t ;
	while(t--) {
		solve() ; 

	}
}