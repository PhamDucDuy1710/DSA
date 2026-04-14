#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x, y, z ; 
    cin >> n >> x >> y >> z ; 
    vector<long long> a(n), b(n);
    vector<long long> v;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        v.push_back(a[i]);
        v.push_back(b[i] + 1);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(v.begin(), v.end());
    long long ans = 0;
    for(auto m : v) {
        long long cntA = upper_bound(a.begin(), a.end(), m) - a.begin();
        long long cntB = lower_bound(b.begin(), b.end(), m) - b.begin();
        long long kq = 1LL*n*x + (y-x) * cntA + (z-y) * cntB;

        ans = max(ans, kq);
    }

    cout << ans;
}