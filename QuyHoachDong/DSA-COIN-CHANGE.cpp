#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> x(k);
        for(int i = 0; i < k; i++) {
            cin >> x[i];
        }
        
        // dp[i] = minimum coins needed to make amount i
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        
        // For each amount from 1 to n
        for(int i = 1; i <= n; i++) {
            // Try each coin
            for(int j = 0; j < k; j++) {
                if(x[j] <= i && dp[i - x[j]] != INT_MAX) {
                    dp[i] = min(dp[i], dp[i - x[j]] + 1);
                }
            }
        }
        
        if(dp[n] == INT_MAX) {
            cout << -1 << "\n";
        } else {
            cout << dp[n] << "\n";
        }
    }
    
    return 0;
}
