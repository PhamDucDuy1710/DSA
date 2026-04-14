#include <bits/stdc++.h>
using namespace std;

vector<long long> solve(long long n) {
    vector<long long> v(10, 0);
    if(n <= 0) return v;
    long long k = 1;
    while(n / k > 0) {
        long long high = n / (k * 10);
        long long cur = (n / k) % 10;
        long long low = n % k;
        for(int d = 0; d <= 9; d++)
            v[d] += high * k;
        for(int d = 0; d < cur; d++)
            v[d] += k;
        v[cur] += low + 1;
        v[0] -= k;
        k *= 10;
    }
    return v;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        vector<long long> r = solve(b);
        vector<long long> l = solve(a - 1);
        for(int i = 0; i < 10; i++)
            cout << r[i] - l[i] << " ";
        cout << "\n";
    }
}