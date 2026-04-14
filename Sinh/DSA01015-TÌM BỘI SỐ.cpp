#include<bits/stdc++.h>
using namespace std ; 
void solve() {
	int n; 
	cin >> n ; 
	queue<string> dq ; 
	dq.push("9") ; 
	while(true) {
		string s = dq.front() ; 
		dq.pop() ; 
		int x = 0 ; 
		for(char c : s) {
			x = x*10 + c - '0' ; 
			x %= n ; 
		}
		if(x == 0) {
			cout << s << "\n" ; 
			return ; 
		}
		dq.push(s+'0') ; 
		dq.push(s+'9') ; 
	}
}
int main() {
	int t ;
	cin >> t ; 
	while(t--) {
		solve() ; 
	}
}