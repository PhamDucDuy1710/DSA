#include <bits/stdc++.h>
using namespace std;

long long f[93];

char cale(long long n, long long k) {
    if(n == 1) return 'A';
    if(n == 2) return 'B';

    if(k <= f[n-2])
        return cale(n-2, k);
    else
        return cale(n-1, k - f[n-2]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i < 93; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        cout << cale(n, k) << "\n";
    }
}