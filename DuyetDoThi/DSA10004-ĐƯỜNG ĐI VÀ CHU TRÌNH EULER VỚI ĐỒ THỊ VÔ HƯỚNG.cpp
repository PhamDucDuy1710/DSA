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
int a[1005][1005], n, m;
int vs[1005];

void DFS(int u) {
    vs[u] = 1;
    for(int v = 1; v <= n; v++) {
        if(!vs[v] && a[u][v] == 1) {
            DFS(v);
        }
    }
}

int kt() {
    // Reset visited
    for(int i = 1; i <= n; i++)
        vs[i] = 0;
    // Tìm 1 đỉnh có cạnh để bắt đầu DFS
    int start = -1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i][j] == 1) {
                start = i;
                break;
            }
        }
        if(start != -1) break;
    }
    if(start == -1) return 0; // không có cạnh
    DFS(start);
    // Kiểm tra liên thông (chỉ xét đỉnh có bậc > 0)
    for(int i = 1; i <= n; i++) {
        int deg = 0;
        for(int j = 1; j <= n; j++)
            if(a[i][j]) deg++;

        if(deg > 0 && !vs[i])
            return 0;
    }
    // Đếm số đỉnh bậc lẻ
    int odd = 0;
    for(int i = 1; i <= n; i++) {
        int deg = 0;
        for(int j = 1; j <= n; j++)
            if(a[i][j]) deg++;

        if(deg % 2 == 1)
            odd++;
    }
    if(odd == 0) return 2;   // Chu trình Euler
    if(odd == 2) return 1;   // Đường đi Euler
    return 0;                // Không có
}
void solve() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            a[i][j] = 0;
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    cout << kt() << "\n";
}

int main() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}