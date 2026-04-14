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
	int n ; 
	cin >> n ; 
	cin.ignore() ; 
	string str ;
	getline(cin,str) ; 
	stringstream ss(str) ; 
	string s ; 
	stack<ll> st ; 
	while(ss >> s) {
		if(s == "+" || s == "-" || s == "*" || s == "/") {
			ll a = st.top() ; st.pop() ; 
			ll b = st.top() ; st.pop() ; 

			if(s == "+") st.push(b+a) ; 
			else if(s == "-") st.push(b-a) ; 
			else if(s == "*") st.push(b*a) ; 
			else st.push(b/a) ;
		}
		else  {
			st.push(stoll(s)) ;
		}
	}
	cout << st.top() << "\n" ;
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