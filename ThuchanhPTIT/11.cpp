#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> largestPrime(MAXN + 1, 0);

    for(int i = 2; i <= MAXN; i++) {
        if(largestPrime[i] == 0) { 
            for(int j = i; j <= MAXN; j += i) {
                largestPrime[j] = i;
            }
        }
    }

    int T;
    cin >> T;

    while(T--) {
        int L, R;
        cin >> L >> R;
        long long sum = 0;
        for(int i = L; i <= R; i++) {
            sum += largestPrime[i];
        }
        cout << sum << "\n";
    }

    return 0;
}