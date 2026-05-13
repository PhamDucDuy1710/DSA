#include <bits/stdc++.h>
using namespace std;

int n, m;
string a[505];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

struct Node {
    int x, y, dir, turn;
};

bool visited[505][505][4][3]; 
// x, y, hướng, số lần đổi (0→2)

bool bfs(int sx, int sy) {
    queue<Node> q;

    // bắt đầu từ S với 4 hướng
    for(int d = 0; d < 4; d++) {
        q.push({sx, sy, d, 0});
        visited[sx][sy][d][0] = true;
    }

    while(!q.empty()) {
        auto cur = q.front(); q.pop();

        int x = cur.x, y = cur.y;
        int dir = cur.dir, turn = cur.turn;

        if(a[x][y] == 'T') return true;

        for(int nd = 0; nd < 4; nd++) {
            int nx = x + dx[nd];
            int ny = y + dy[nd];

            int nturn = turn + (nd != dir);

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(a[nx][ny] == '*') continue;
            if(nturn > 2) continue;

            if(!visited[nx][ny][nd][nturn]) {
                visited[nx][ny][nd][nturn] = true;
                q.push({nx, ny, nd, nturn});
            }
        }
    }

    return false;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;

        for(int i = 0; i < n; i++) cin >> a[i];

        memset(visited, false, sizeof(visited));

        int sx, sy;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i][j] == 'S') {
                    sx = i;
                    sy = j;
                }
            }
        }

        if(bfs(sx, sy)) cout << "YES\n";
        else cout << "NO\n";
    }
}