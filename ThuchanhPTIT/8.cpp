#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n);

    long long maxx = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    long long ans = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == maxx) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << ans;
    return 0;
}