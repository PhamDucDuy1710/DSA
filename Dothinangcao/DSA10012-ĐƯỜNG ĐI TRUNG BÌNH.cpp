#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> dist(n+1, vector<int>(n+1, INF));

        for(int i = 1; i <= n; i++) dist[i][i] = 0;

        for(int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            dist[u][v] = 1;
        }

        // Floyd
        for(int k = 1; k <= n; k++) {
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= n; j++) {
                    if(dist[i][k] < INF && dist[k][j] < INF) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        double sum = 0;
        int cnt = 0;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i != j && dist[i][j] < INF) {
                    sum += dist[i][j];
                    cnt++;
                }
            }
        }

        cout << fixed << setprecision(2) << sum / cnt << "\n";
    }
}