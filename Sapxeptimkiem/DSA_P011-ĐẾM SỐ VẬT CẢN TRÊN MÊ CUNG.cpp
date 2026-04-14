#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; i++)
#define FD(i, a, b) for(int i = a; i > b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
int n, m;
char a[1005][1005];
bool visited[1005][1005];

int dx[4] = {-1, 1, 0, 0};  // trên, dưới
int dy[4] = {0, 0, -1, 1};  // trái, phải

void bfs(int i, int j) {
    queue<pair<int,int>> q;
    q.push({i, j});
    visited[i][j] = true;

    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for(int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if(!visited[nx][ny] && a[nx][ny] == '#') {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}
void solve() {
    cin >> n >> m;
    memset(visited, false, sizeof(visited));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int countObstacle = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == '#' && !visited[i][j]) {
                countObstacle++;
                bfs(i, j);
            }
        }
    }

    cout << countObstacle;
}

int main() {
    faster();
    int t = 1 ; 
    while(t--) {
        solve();
    }
    return 0;
}