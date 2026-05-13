#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> C(N, vector<int>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> C[i][j];

    vector<vector<int>> dp(N+1, vector<int>(N, INF));

    for (int i = 0; i < N; i++) dp[0][i] = 0;

    for (int k = 1; k <= N; k++) {
        for (int v = 0; v < N; v++) {
            for (int u = 0; u < N; u++) {
                dp[k][v] = min(dp[k][v], dp[k-1][u] + C[u][v]);
            }
        }
    }

    double res = 1e18;
    int num = 0, den = 1;

    for (int v = 0; v < N; v++) {
        double max_avg = -1e18;
        int best_num = 0, best_den = 1;

        for (int k = 0; k < N; k++) {
            int S = dp[N][v] - dp[k][v];
            int D = N - k;
            double avg = (double)S / D;

            if (avg > max_avg) {
                max_avg = avg;
                best_num = S;
                best_den = D;
            }
        }

        if (max_avg < res) {
            res = max_avg;
            num = best_num;
            den = best_den;
        }
    }

    int g = __gcd(num, den);
    cout << num/g << "/" << den/g << endl;

    return 0;
}