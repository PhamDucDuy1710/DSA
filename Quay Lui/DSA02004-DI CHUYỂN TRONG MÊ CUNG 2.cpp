#include<bits/stdc++.h>
using namespace std ;
int n, a[11][11] ; 
bool ok, visited[11][11] ; 
void Try(int i, int j, string s) {
	if(i < 1 || i > n || j < 1 || j > n ) return ; 
	if(!a[i][j] || visited[i][j]) return ; 
	if(i == n && j == n) {
		cout << s << " " ; 
		ok = 1 ; 
		return ; 
	}
	visited[i][j] = 1 ; 
	Try(i+1,j,s + 'D') ; 
	Try(i,j-1,s + 'L') ; 
	Try(i,j+1,s + 'R') ; 
	Try(i-1,j,s + 'U') ; 
	visited[i][j] = 0 ; 
}
void solve() {
	ok = 0 ; 
	cin >> n ; 
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= n ; j++) {
			cin >> a[i][j] ; 
		}
	}
	Try(1,1,"") ; 
	if(!ok) cout << "-1" ; 
}
int main() {
	int t ;
	cin >> t ; 
	while(t--) {
		solve() ; 
		cout << "\n" ; 
	}
}