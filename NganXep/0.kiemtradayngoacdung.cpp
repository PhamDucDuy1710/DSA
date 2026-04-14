#include<bits/stdc++.h>
using namespace std ; 
bool check(string s){
	stack<char> st;
	for(char x : s){
		if(x == '('){
			st.push(x);
		}
		else{
			if(st.empty()) return false;
			st.pop();
		}
	}
	return st.empty();
}
int main() {
	string s ; 
	cin >> s ; 
	if(check(s)) cout << "Yes\n" ; 
	else cout << "No\n" ; 
}