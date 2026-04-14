#include <bits/stdc++.h>
using namespace std;
int n, a[11][11] ; 
bool ok ; 
void Try(int i, int j, string s) {
	if(!a[i][j]) return ; 
	if(i == n && j == n) {
		cout << s << " " ; 
		ok = 1 ; 
		return  ; 
	}
	if(i != n) Try(i+1,j,s + "D") ; 
	if(j != n) Try(i,j+1, s + "R") ; 
}
void solve() {
	cin >> n ; 
	for(int i = 1 ; i <= n ; i++) {
		for(int j =1 ; j <= n ; j++) {
			cin >> a[i][j] ; 
		}
	}
	ok = 0 ; 
	Try(1,1,"") ; 
	if(!ok) cout << "-1" ; 
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t ; 
	cin >> t; 
	while(t--) {
		solve() ; 
		cout << "\n" ; 
	}
}