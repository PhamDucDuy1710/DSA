#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a(20);
vector<vector<int>> ans;

bool check() {
    int cntA = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) cntA++;
        else cntA = 0;

        if (cntA > k) return false;
        if (cntA == k) cnt++;
    }
    return cnt == 1;
}

void Try(int m) {
    for (int i = 0; i <= 1; i++) {
        a[m] = i;
        if (m == n) {
            if (check()) ans.push_back(a);
        } else {
            Try(m + 1);
        }
    }
}

void solve() {
    cin >> n >> k;
    ans.clear();   
    Try(1);

    cout << ans.size() << "\n";
    for (auto &v : ans) {
        for (int i = 1; i <= n; i++) {
            cout << char('A' + v[i]); 
        }
        cout << "\n";
    }
}

int main() {
    int t = 1 ; 
    while (t--) solve();
}
