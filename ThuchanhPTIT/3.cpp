#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int m, d;
string a, b;
long long dp[2005][2005][2];
bool vis[2005][2005][2];
int len;

long long solve(int pos, int mod, int tight, string &s) {
    if(pos == len)
        return (mod == 0);

    if(vis[pos][mod][tight])
        return dp[pos][mod][tight];

    vis[pos][mod][tight] = true;
    long long res = 0;

    int limit = tight ? (s[pos] - '0') : 9;

    for(int dig = 0; dig <= limit; dig++) {

        int position = pos + 1;

        if(position % 2 == 1) {
            if(dig == d) continue;
        } else {
            if(dig != d) continue;
        }

        int new_tight = (tight && dig == limit);
        int new_mod = (mod * 10 + dig) % m;

        res = (res + solve(pos + 1, new_mod, new_tight, s)) % MOD;
    }

    return dp[pos][mod][tight] = res;
}

long long calc(string s) {
    len = s.size();
    memset(vis, 0, sizeof(vis));
    return solve(0, 0, 1, s);
}

string minusOne(string s) {
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '0') {
        s[i] = '9';
        i--;
    }
    if(i >= 0) s[i]--;
    return s;
}

int main() {
    cin >> m >> d;
    cin >> a >> b;

    long long ansB = calc(b);
    string a_minus = minusOne(a);
    long long ansA = calc(a_minus);

    cout << (ansB - ansA + MOD) % MOD;
}