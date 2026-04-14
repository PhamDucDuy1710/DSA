#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], c[100];
set<int> se;

void result() {
    for (int i = 1; i <= k; i++) {
        cout << c[a[i]] << " ";
    }
    cout << "\n";
}

void Try(int m) {
    for (int i = a[m - 1] + 1; i <= n - k + m; i++) {
        a[m] = i;
        if (m == k) result(); 
        else Try(m + 1);
    }
}

int main() {
    cin >> n >> k;
	for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        se.insert(x);
    }
	int cnt = 1;
    for (auto x : se) {
        c[cnt++] = x;
    }
	n = se.size(); 
    a[0] = 0;
	Try(1);
    return 0;
}
