 #include<bits/stdc++.h>
using namespace std ; 
int main() {
	int t ;
	cin >> t ;
	while(t--) {
		int n ; 
		cin >> n  ;
		int a[n + 1] ; 
		for(int i = 1 ; i <= n ;i++) cin >> a[i] ; 
		int i = n - 1 ; 
		while(a[i] > a[i + 1] && i > 0) {
			i-- ; 
		}
		if(i == 0) {
			for(int j = 1 ; j <= n ;j++) {
				cout << j << " " ; 
			}
			cout << "\n" ; 
		}
		else {
			int j, k = n;
			while (a[k] < a[i]) k--;
			swap(a[i], a[k]);
			j = i + 1; k = n;
			while (j < k) {
			int tmp = a[j];
				a[j] = a[k];
				a[k] = tmp;
				j++; k--;
			}
			for(int l = 1 ; l <= n; l++) {
				cout << a[l] << " " ; 
			}
			cout << "\n" ; 
		}
	}
}