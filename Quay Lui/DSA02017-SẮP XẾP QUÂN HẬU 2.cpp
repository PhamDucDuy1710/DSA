#include<bits/stdc++.h>
using namespace std ;
int a[9][9] ; 
bool cot[9], cheoChinh[9], cheoPhu[9] ; 
int X[100] , maxx ; 
void result() {
	int sum = 0 ; 
	for(int i = 1; i <= 8 ; i++) {
		sum += X[i] ; 
	}
	maxx = max(maxx,sum) ; 
}
void Try(int i) {
	for(int j = 1; j <= 8; j++) {
		if(cot[j] || cheoChinh[i-j+8] || cheoPhu[i+j-1]) {
			continue ; 
		}
		X[i] = a[i][j] ; 
		cot[j] = cheoChinh[i-j+8] = cheoPhu[i+j-1] = 1 ; 
		if(i == 8) result() ; 
		else Try(i+1) ; 
		cot[j] = cheoChinh[i-j+8] = cheoPhu[i+j-1] = 0 ; 
	}
}
void solve() {
	maxx = 0 ; 
	for(int i = 1 ; i <= 8 ; i++) {
		for(int j = 1 ; j <= 8 ; j++) {
			cin >> a[i][j] ;
		}
	}
	Try(1) ; 
	cout << maxx  ; 
}
int main() {
	int t ;
	cin >> t ;
	for(int tc = 1 ; tc <= t ; tc++) {
		solve() ; 
		cout << "\n" ; 
	}
}