#include<bits/stdc++.h>
using namespace std ; 
void solve(string s) {
	stack<string> st ; 
	for(int i = 0 ; i < s.size() ;i++) {
		if(isalpha(s[i])) {
			st.push(string(1,s[i])) ; 
		}
		else {
			string t1 = move(st.top()) ; st.pop() ; 
			string t2 = move(st.top()) ; st.pop() ; 
			string tmp = "(" + t2 + s[i] + t1 + ")" ; 
			st.push(move(tmp)) ; 
		}
	}
	cout << st.top() << "\n" ; 
}
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		string s ; 
		cin >> s ; 
		solve(s) ; 
	}
}