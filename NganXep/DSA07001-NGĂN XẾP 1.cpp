#include<bits/stdc++.h>
using namespace std ; 
void solve() {
	int x ; 
	string s ; 
	vector<int> v ; 
	while(cin >> s) {
		if(s == "push") {
			cin >> x  ; 
			v.push_back(x) ; 
		}
		else if(s == "pop") {
			if(!v.empty()) {
				v.pop_back()  ;  
			}
		}
		else if(s == "show") {
			if(v.empty()) {
				cout << "empty" << "\n" ; 
			}
			else {
				for(auto x : v ){
					cout << x << " " ; 
				}
				cout << "\n" ; 
			}
		}
	}
}
int main() {
	int t = 1 ; 
	while(t--) {
		solve() ; 
	}
}