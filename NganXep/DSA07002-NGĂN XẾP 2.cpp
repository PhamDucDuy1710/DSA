#include<bits/stdc++.h>
using namespace std ; 
int x ; 
string s ; 
vector<int> v ; 
void solve() {
    cin >> s ; 
    if(s == "PUSH") {
        cin >> x ; 
        v.push_back(x) ; 
    }
    else if(s == "POP") {
        if(!v.empty()) {
            v.pop_back() ; 
        }
    }
    else if(s == "PRINT") {
        if(v.empty()) {
            cout << "NONE" << "\n" ; 
        }
        else {
            cout << v[v.size()-1] << "\n" ; 
        }
    }
}
int main() {
    int t ;
    cin >> t ;
    while(t--) {
        solve() ; 
    }
}