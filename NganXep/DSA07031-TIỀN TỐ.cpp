#include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		int n ; 
		cin >> n ; 
		cin.ignore() ; 
		string str ; 
		getline(cin,str) ; 
		stringstream ss(str) ; 
		string s ;
		vector<string> v ;
		while(ss >> s) {
			v.push_back(s) ; 
		} 
		stack<long long> st ; 
		for(int i = v.size() -1 ;i >= 0 ; i--) {
			if(v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/") {
				long long a = move(st.top()); st.pop() ; 
				long long b = move(st.top()); st.pop() ; 
				if(v[i] == "+") st.push(move(a+b)) ; 
				else if(v[i] == "-") st.push(move(a-b)) ; 
				else if(v[i] == "*") st.push(move(a*b)) ; 
				else st.push(move(a/b)) ; 
			}
			else {
				st.push(stoll(v[i])) ; 
			}
		}
		cout << st.top() << "\n" ; 
	}
}