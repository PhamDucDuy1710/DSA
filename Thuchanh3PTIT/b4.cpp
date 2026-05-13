#include <bits/stdc++.h>

using namespace std;

const int N=100010;
vector<int> adj[N];
bool vis[N];
int n,m;

void dfs(int u, int &cnt){
    vis[u]=true;
    cnt++;
    for(int v:adj[u]){
        if(!vis[v]) dfs(v,cnt);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(vis,0,sizeof(vis));
    int S=0;
    dfs(1,S);
    int max_other=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int cnt=0;
            dfs(i,cnt);
            max_other=max(max_other,cnt);
        }
    }
    cout<<S + max_other<<endl;
    return 0;
}