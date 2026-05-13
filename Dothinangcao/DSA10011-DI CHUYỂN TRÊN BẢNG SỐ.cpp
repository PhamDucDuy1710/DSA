#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int n, m;
int a[505][505];
int dist[505][505];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void solve() {
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    // khởi tạo
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            dist[i][j] = INF;

    priority_queue<
        pair<int, pair<int,int>>,
        vector<pair<int, pair<int,int>>>,
        greater<pair<int, pair<int,int>>>
    > pq;

    dist[0][0] = a[0][0];
    pq.push({dist[0][0], {0, 0}});

    while(!pq.empty()) {
        auto top = pq.top(); pq.pop();
        int d = top.first;
        int x = top.second.first;
        int y = top.second.second;

        if(d > dist[x][y]) continue;

        for(int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

            if(dist[nx][ny] > dist[x][y] + a[nx][ny]) {
                dist[nx][ny] = dist[x][y] + a[nx][ny];
                pq.push({dist[nx][ny], {nx, ny}});
            }
        }
    }

    cout << dist[n-1][m-1] << "\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}