#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cout << fixed << setprecision(4);
    while(t--) {
        double A, B, C;
        cin >> A >> B >> C;
        double l = 0, r = 100;
        double mid;
        for(int i = 0; i < 100; i++) {   
            mid = (l + r) / 2.0;
            double value = A*mid*mid*mid + B*mid - C;
            if(value > 0)
                r = mid;
            else
                l = mid;
        }
        cout << (l + r)/2.0 << "\n";
    }
}