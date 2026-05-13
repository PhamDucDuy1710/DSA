#include<bits/stdc++.h>
using namespace std;

int a[1005][1005], lt[1005], n;

void DFS(int u) {
    lt[u] = 1;
    for(int v = 1; v <= n; v++) {
        if(lt[v] == 0 && a[u][v] == 1) {
            DFS(v);
        }
    }
}

int tpltDfs() {
    int k = 0;
    for(int i = 1; i <= n; i++)
        lt[i] = 0;

    for(int i = 1; i <= n; i++) {
        if(lt[i] == 0) {
            k++;
            DFS(i);
        }
    }
    return k;
}

void solve() {
    int E;
    cin >> n >> E;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            a[i][j] = 0;
        }
    }

    for(int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        a[u][v] = 1;
        a[v][u] = 1;
    }

    int k = tpltDfs();   // số thành phần liên thông ban đầu

    for(int u = 1; u <= n; u++) {

        vector<int> ke;

        // Xóa cạnh của u
        for(int v = 1; v <= n; v++) {
            if(a[u][v] == 1) {
                ke.push_back(v);
                a[u][v] = 0;
                a[v][u] = 0;
            }
        }

        // Loại bỏ u khỏi việc đếm
        for(int i = 1; i <= n; i++)
            lt[i] = 0;

        lt[u] = 1;   // ⭐ QUAN TRỌNG

        int I = 0;
        for(int i = 1; i <= n; i++) {
            if(lt[i] == 0) {
                I++;
                DFS(i);
            }
        }

        if(I > k)
            cout << u << " ";

        // Khôi phục cạnh
        for(int v : ke) {
            a[u][v] = 1;
            a[v][u] = 1;
        }
    }

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}