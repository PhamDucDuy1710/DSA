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

long long MOD = 1e9 + 7;
int n;

struct mt {
    vector<vector<long long>> mat;
    mt() {
        mat.resize(n, vector<long long>(n, 0));
    }
};
mt nhan(mt A, mt B) {
    mt C;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C.mat[i][j] = (C.mat[i][j] + A.mat[i][k] * B.mat[k][j]) % MOD;
            }
        }
    }
    return C;
}
mt power(mt A, long long k) {
    mt res;
    for (int i = 0; i < n; i++) res.mat[i][i] = 1; 
    while (k > 0) {
        if (k % 2 == 1) res = nhan(res, A);
        A = nhan(A, A);
        k /= 2;
    }
    return res;
}

void solve() {
	long long k;
    cin >> n >> k;
    mt A;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A.mat[i][j];
        }
    }
    mt res = power(A, k);
    long long ans = 0;
    for (int j = 0; j < n; j++) {
       	ans = (ans + res.mat[n - 1][j]) % MOD;
    }
    cout << ans << endl;
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
