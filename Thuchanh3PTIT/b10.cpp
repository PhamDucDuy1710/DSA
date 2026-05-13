#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, Q;
    cin >> N >> M >> Q;
    const long long INF = 1e18;
    vector<vector<long long>> dist(N, vector<long long>(N, INF));
    for (int i = 0; i < N; i++) dist[i][i] = 0;
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        dist[u][v] = min(dist[u][v], (long long)w);
    }
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));
                }
            }
        }
    }
    for (int q = 0; q < Q; q++) {
        int S, T;
        cin >> S >> T;
        S--; T--;
        if (dist[S][T] == INF) {
            cout << -1 << endl;
        } else {
            cout << dist[S][T] << endl;
        }
    }
    return 0;
}