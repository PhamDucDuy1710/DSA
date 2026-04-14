#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<int> A(N + 1), B(M + 1);
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int j = 1; j <= M; j++) cin >> B[j];
    vector<vector<long long>> dp(N + 1, vector<long long>(M + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (A[i] == B[j]) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + 1) % MOD;
            } else {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + MOD) % MOD;
            }
        }
    }

    cout << dp[N][M] + 1  << endl;

    return 0;
}