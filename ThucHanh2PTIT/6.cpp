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
bool cmp(string a, string b) {
	if(a.size() == b.size()) {
		return a < b ;
	}
	return a.size() < b.size() ; 
}
void solve() {
	int n; cin >> n;
        queue<string> q;
        q.push("6");
        q.push("8");
        vector<string> v;
        while (v.size() < n) {
            string s = q.front(); q.pop();
            string t = s;
            reverse(t.begin(), t.end());
            v.push_back(s + t);
            q.push(s + "6");
            q.push(s + "8");
        }
//		sort(v.begin(),v.end(),cmp) ; 
        for (string x : v) cout << x << " ";
        cout << "\n";
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
