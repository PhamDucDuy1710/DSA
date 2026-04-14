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
int dx[] = {-2,-2,-1,-1,1,1,2,2} ; 
int dy[] = {-1,1,-2,2,-2,2,-1,1} ; 
int bfs(string s, string t) {
    int sx = s[0] - 'a' ; 
    int sy = s[1] - '1' ; 
    int tx = t[0] - 'a' ; 
    int ty = t[1] - '1' ;

    queue<pair<int,int>> q ; 
    int d[8][8] ; 
    memset(d,-1,sizeof(d)) ;

    q.push({sx,sy}) ;
    d[sx][sy] = 0 ;
    while(!q.empty()) {
        pair<int,int> p = q.front(); q.pop() ; 
        if(p.first == tx && p.second == ty) return d[p.first][p.second] ;

        for(int i = 0 ; i < 8 ; i++) {
            int nx = p.first + dx[i] ; 
            int ny = p.second + dy[i] ;

            if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && d[nx][ny] == -1) {
                d[nx][ny] = d[p.first][p.second] + 1 ; 
                q.push({nx,ny}) ;
            }
        }
    }
    return -1 ;
}
void solve() {
    string s, t ;
    cin >> s >> t ;
    cout << bfs(s,t) << "\n" ; 
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