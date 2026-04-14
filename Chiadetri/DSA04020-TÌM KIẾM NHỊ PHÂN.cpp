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
    int n, k;
    cin >> n >> k;

    int ans = -1;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == k && ans == -1) {
            ans = i + 1 ;  
        }
    }

    if(ans != -1) cout << ans << "\n";
    else cout << "NO\n";
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