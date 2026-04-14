#include <bits/stdc++.h>
using namespace std;
int n, cnt; 
bool cot[20], cheoChinh[20], cheoPhu[20] ; 
void Try(int i) {
	for(int j = 1 ; j <= n ;j++) {
		if(cot[j] || cheoChinh[i-j+n] || cheoPhu[i+j-1]) {
			continue; 
		}
		cot[j] = cheoChinh[i-j+n] = cheoPhu[i+j-1] = 1; 
		if(i == n) cnt++ ; 
		else Try(i+1) ; 
		cot[j] = cheoChinh[i-j+n] = cheoPhu[i+j-1] = 0; 
	}
}
void solve() {
	cin >> n ; 
	cnt = 0 ; 
	Try(1) ; 
	cout << cnt << "\n" ; 
	memset(cot,0,sizeof(cot)) ; 
	memset(cheoChinh,0,sizeof(cheoChinh)) ;
	memset(cheoPhu,0,sizeof(cheoPhu)) ;
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