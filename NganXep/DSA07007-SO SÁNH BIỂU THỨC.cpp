#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; i++)
#define FD(i, a, b) for(int i = a; i > b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

string sol(string s) {
    stack<char> st ; 
    for(int i = 0 ; i < s.size(); i++) {
        if(s[i] != ')') {
            st.push(s[i]) ; 
        }
        else {
            string tmp = "" ; 
            while(st.top() != '(') {
                tmp = st.top() + tmp ; 
                st.pop() ; 
            }
            st.pop() ; 
            if(!st.empty() && st.top() == '-') {
                for(char c : tmp) {
                    if(c == '+') c = '-' ; 
                    else if(c == '-') c = '+' ; 
                    st.push(c) ; 
                }
            }
            else {
                for(char c : tmp) {
                    st.push(c) ; 
                }
            }
        }
    }
    string ans = "" ; 
    while(!st.empty()) {
        ans = st.top() + ans ; 
        st.pop() ; 
    }
    return ans ;
}

void solve() {
    string s, t ;
    cin >> s >> t ;
    if(sol(s) == sol(t)) cout << "YES\n" ; 
    else cout << "NO\n" ; 
}

int main() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}