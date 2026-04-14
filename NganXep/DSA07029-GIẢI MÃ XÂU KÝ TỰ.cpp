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

void solve() {
    string s ;
    cin >> s ;
    stack<int> st2 ; 
    stack<string> st1 ; 
    for(int i =  0 ; i < s.size() ; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            int num = 0 ;
            while(i < s.size() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0') ; 
                i++ ; 
            } 
            i-- ; 
            st2.push(num) ;
        }
        else if(s[i] == ']') {
            string tmp = "" ; 
            while(st1.top() != "[") {
                tmp = st1.top() + tmp ;
                st1.pop() ; 
            }
            st1.pop() ;
            string res = "" ;
            int dem = st2.top() ; st2.pop() ; 
            while(dem--) {
                res += tmp ; 
            }
            st1.push(res) ;
        }
        else {
            st1.push(string(1,s[i])); 
            if(s[i] == '[' && (i == 0 || s[i-1] < '0' || s[i-1] > '9')) {
                st2.push(1) ;
            }
        }
    }
    string ans = "" ; 
    while(!st1.empty()) {
        ans = st1.top() + ans ;
        st1.pop() ; 
    }
    cout << ans << "\n" ;
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