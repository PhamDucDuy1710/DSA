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

int priority(char c) {
    if(c == '*' || c == '/') return 3 ; 
    if(c == '+' || c == '-') return 2 ; 
    return 1 ; 
}

bool isOperator(string s) {
    return (s == "+" || s == "-" || s == "*" || s == "/")  ; 
}

ll calc(ll x, ll y, string o) {
    if(o == "*") return x * y ; 
    if(o == "/") return x / y ;
    if(o == "+") return x + y ; 
    if(o == "-") return x - y ;
}

ll to_num(string s) {
    ll num = 0 ;
    for(auto x : s) {
        num = num * 10 + (x - '0') ; 
    }
    return num ;
}

void solve() {
    string s ;
    cin >> s ;
    vector<string> v ;
    stack<char> st; 
    for(int i = 0 ; i < s.size() ; i++) {
        if(isdigit(s[i])) {
            string num = "" ; 
            while(i < s.size() && isdigit(s[i])) {
                num += s[i] ; 
                i++ ;
            }
            i-- ;
            v.pb(num) ; 
        }
        else if(s[i] == '(') {
            st.push(s[i]) ; 
        }
        else if(s[i] == ')') {
            while(st.top() != '(') {
                v.pb(string(1,st.top())) ; 
                st.pop() ;
            }
            st.pop() ;
        }
        else {
            while(!st.empty() && priority(st.top()) >= priority(s[i])) {
                v.pb(string(1,st.top())) ;
                st.pop() ;  
            }
            st.push(s[i]) ; 
        }
    }
    while(!st.empty()) {
        v.pb(string(1,st.top())) ;
        st.pop() ;
    }

    stack<ll> stk ;
    for(int i = 0 ; i < v.size() ; i++) {
        if(isOperator(v[i])) {
            ll y = stk.top() ; stk.pop() ; 
            ll x = stk.top() ; stk.pop() ; 
            stk.push(calc(x,y,v[i])) ;
        }
        else {
            stk.push(to_num(v[i])) ;
        }
    }
    cout << stk.top() << "\n" ;
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