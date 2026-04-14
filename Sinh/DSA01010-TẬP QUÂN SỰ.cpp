#include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t;
	cin >> t ;
	while(t--) {
		int n, k ; 
		cin >> n >> k ; 
		int a[n+1] ; 
		map<int,int> m ; 
		int cnt = 0  ;
		for(int i= 1; i<= k ;i++) {
			cin >> a[i] ; 
			m[a[i]]++ ; 
		}
		int i = k ; 
		while(a[i] == n- k +i) {
			i-- ;
		}
		if(i == 0) {
			cout << k << "\n" ; 
		}
		else {
			a[i]++ ;
			for(int j = i +1 ; j<= k ;j++) {
				a[j] = a[j-1] +1 ; 
			}
			for(int j = 1 ; j<=  k;j++) {
				if(!m[a[j]]) cnt++ ; 
			}
			cout << cnt << "\n" ; 
		}
	}
}