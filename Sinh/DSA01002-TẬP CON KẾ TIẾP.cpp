 #include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		int n, k ; 
		cin >> n >> k ; 
		int a[n + 1] ; 
		for(int m = 1 ; m <= k ;m++) cin >> a[m] ; 
		int i = k ; 
		while(a[i] == n - k + i && i > 0) {
			i-- ; 
		}
		if(i == 0) {
			for(int j = 1 ; j <= k ;j++) {
				cout << j << " " ; 
			}
			cout << "\n" ; 
		}
		else {
			a[i]++ ; 
			for(int j = i + 1 ; j <= k ;j++) {
				a[j] = a[j- 1] + 1 ; 
			}
			for(int j = 1 ; j <= k ;j++) {
				cout << a[j] << " " ; 
			}
			cout << "\n" ; 
		}
	}
}