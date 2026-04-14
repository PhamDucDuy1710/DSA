#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 2, 0);
    while(q--) {
        int x, y;
        cin >> x >> y;
        a[x] += 1;
        a[y + 1] -= 1;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += a[i];
        cout << (ans % 2) << " ";
    }
    return 0;
}