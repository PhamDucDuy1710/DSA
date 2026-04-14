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

string Sum(string a, string b, long long K) {
    int len = max(a.size(), b.size());
    while(a.size() < len) a = "0" + a;
    while(b.size() < len) b = "0" + b;

    string res = "";
    int nho = 0;

    for(int i = len - 1; i >= 0; i--) {
        int digit = (a[i] - '0') + (b[i] - '0') + nho;
        nho = digit / K;
        digit = digit % K;
        res = char(digit + '0') + res;
    }

    if(nho > 0) res = char(nho + '0') + res;
    return res;
}

void solve() {
    long long K;
    string A, B;
    cin >> K >> A >> B;
    cout << Sum(A, B, K) << "\n";
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

