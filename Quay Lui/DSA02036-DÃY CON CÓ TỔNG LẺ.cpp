#include <bits/stdc++.h>
using namespace std;

int n, a[16], X[16];
vector<vector<int>> res;

void save(int m) {
    vector<int> t;
    for (int i = 1; i <= m; i++)
        t.push_back(X[i]);
    res.push_back(t);
}

void Try(int i, int idx, int sum) {
    for (int j = idx + 1; j <= n; j++) {
        X[i] = a[j];
        int newSum = sum + a[j];

        if (newSum % 2 == 1)
            save(i);

        Try(i + 1, j, newSum);
    }
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);

    res.clear();
    Try(1, 0, 0);

    sort(res.begin(), res.end()); 

    for (auto &v : res) {
        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
