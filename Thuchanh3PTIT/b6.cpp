#include <bits/stdc++.h>

using namespace std;

class DSU {
    vector<int> par, rnk;
public:
    DSU(int n) {
        par.resize(n+1);
        rnk.resize(n+1, 0);
        for(int i=1; i<=n; i++) par[i]=i;
    }
    int find(int x) {
        if(par[x] != x) par[x] = find(par[x]);
        return par[x];
    }
    void unite(int x, int y) {
        int px = find(x), py = find(y);
        if(px == py) return;
        if(rnk[px] < rnk[py]) par[px] = py;
        else if(rnk[px] > rnk[py]) par[py] = px;
        else {
            par[py] = px;
            rnk[px]++;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    cin >> Q;
    DSU dsu(100010);
    for(int i=0; i<Q; i++) {
        int X,Y,Z;
        cin >> X >> Y >> Z;
        if(Z==1) {
            dsu.unite(X,Y);
        } else {
            if(dsu.find(X) == dsu.find(Y)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}