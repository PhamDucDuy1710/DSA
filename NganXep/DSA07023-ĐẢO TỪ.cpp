#include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t ;
	cin >> t ; 
	cin.ignore() ; 
	while(t--) {
		string str ; 
		getline(cin,str) ; 
		stringstream ss(str) ; 
		stack<string> st ; 
		string s ; 
		while(ss >> s) {
			st.push(s) ; 
		}
		while(!st.empty()) {
			cout << st.top() << " " ; 
			st.pop() ; 
		}
		cout << "\n" ; 
	} 
}