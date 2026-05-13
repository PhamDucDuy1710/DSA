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
	int m ;
	cin >> m ;
	while(m--) {
		char k ; 
		cin >> k ;
		if(k == 'q') {
			int l, r ;
			cin >> l >> r ;
			string t = s ;
			reverse(t.begin() + l - 1, t.begin() + r) ;
			if(t == s) cout << "YES\n" ; 
			else {
				cout << "NO\n" ; 
			}
		}
		else {
			int i ; 
			cin >> i ; 
			char a; 
			cin >> a; 
			s[i-1] = a;
		}
	}
}

int main() {
    faster();
    int t = 1; 
//    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
