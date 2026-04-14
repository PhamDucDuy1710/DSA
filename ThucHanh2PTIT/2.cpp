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

int k, n;
string s;
long long ans = 0;
void backtrack(int i, int op, int cl, int deg) {
    int bl = op - cl;
    int res = n - i;
    if(bl < 0) return;
    if(bl > k) return;
    if(bl > res) return;
    if(deg + res < k) return;
    if(i == n) {
        if(op == cl && deg == k) {
            ans++;
        }
        return;
    }
    if(s[i] == '?') {
        s[i] = '(';
        backtrack(i + 1, op + 1, cl, max(deg, bl + 1));
        if(cl < op) {
            s[i] = ')';
            backtrack(i + 1, op, cl + 1, deg);
        }
        s[i] = '?';
    }
    else if(s[i] == '(') {
        backtrack(i + 1, op + 1, cl, max(deg, bl + 1));
    }
    else {
        if(cl < op) {
            backtrack(i + 1, op, cl + 1, deg);
        }
    }
}

void solve() {
	cin >> k >> s;
    n = s.size();
    backtrack(0, 0, 0, 0);
    cout << ans;
}

int main() {
    faster();
    int t = 1 ;
//    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
// Cách 2 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int K;
//     string S;
//     cin >> K >> S;

//     int n = S.size();
//     if (n % 2 != 0 || K > n / 2) {
//         cout << 0 << '\n';
//         return 0;
//     }

//     int max_bal = min(K, n / 2);
//     vector<vector<long long>> dp(max_bal + 1, vector<long long>(K + 1, 0));
//     dp[0][0] = 1;

//     for (char c : S) {
//         vector<vector<long long>> nxt(max_bal + 1, vector<long long>(K + 1, 0));

//         for (int bal = 0; bal <= max_bal; ++bal) {
//             for (int md = 0; md <= K; ++md) {
//                 long long val = dp[bal][md];
//                 if (val == 0) continue;

//                 // Thử đặt '('
//                 if (c == '(' || c == '?') {
//                     int nbal = bal + 1;
//                     if (nbal <= max_bal) {
//                         int nmd = max(md, nbal);
//                         if (nmd <= K) {
//                             nxt[nbal][nmd] += val;
//                         }
//                     }
//                 }

//                 // Thử đặt ')'
//                 if (c == ')' || c == '?') {
//                     if (bal > 0) {
//                         int nbal = bal - 1;
//                         int nmd = md;
//                         nxt[nbal][nmd] += val;
//                     }
//                 }
//             }
//         }

//         dp = move(nxt);
//     }

//     cout << dp[0][K] << '\n';
//     return 0;
// }