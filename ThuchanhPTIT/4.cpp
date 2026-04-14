#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        long long P;
        cin >> P;
        if(P == 1) {
            cout << 1 << "\n";
            continue;
        }
       vector<int> digits;
        for(int d = 9; d >= 2; d--) {
            while(P % d == 0) {
                digits.push_back(d);
                P /= d;
            }
        }
        if(P != 1) {
            cout << -1 << "\n";
        } else {
            sort(digits.begin(), digits.end());
            for(int d : digits)
                cout << d;
            cout << "\n";
        }
    }
    return 0;
}