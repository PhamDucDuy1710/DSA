#include <bits/stdc++.h>
using namespace std;
int m, n, a[11][11] ,cnt ; 
void Try(int i, int j) {
	if(i == m && j == n) {
		cnt++ ; 
		return ;  
	}
	if(i != m) Try(i +1,j) ; 
	if(j != n) Try(i,j+ 1) ; 
}
void solve() {
	cin >> m >> n ; 
	for(int i =1 ; i <= m ; i++) {
		for(int j = 1; j <= n ;j++) {
			cin >> a[i][j] ; 
		}
	}
	cnt = 0 ; 
	Try(1,1) ; 
	cout << cnt << "\n" ; 
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t ; 
	cin >> t; 
	while(t--) {
		solve() ; 
	}
}