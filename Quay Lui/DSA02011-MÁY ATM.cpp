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
int n, S, ans ; 
vector<int> a ; 
void Try(int i, int val, int cnt) {
	if(i == n || val >= S || cnt >= ans) {
		if(val == S) ans = min(ans,cnt) ; 
		return ;  
	}
	Try(i+1,val,cnt)  ;
	Try(i+1,val+a[i],cnt + 1) ; 
}
void solve() {
	cin >> n >> S ; 
	ans = INT_MAX ; 
	a.resize(n) ; 
 	for(int &x : a) {
		cin >> x ; 
	}
	Try(0,0,0) ; 
	if(ans != INT_MAX) {
		cout << ans << "\n" ; 
	}
	else {
		cout << "-1\n" ;  
	}
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
