#include <bits/stdc++.h>
using namespace std;

int a[100] = {0}, n, k ,cnt, b[100] ; 

void result() {
	cnt++ ; 
	bool ok = 0 ; 
	for(int i = 1 ; i <= k ;i++) {
		if(a[i] != b[i]) {
			ok = 1; 
			break ; 
		}
	}
	if(!ok) {
		cout << cnt << "\n" ; 
	}
}

void Try(int m) {
	for (int i = a[m-1] + 1; i <= n - k + m; i++) {
		a[m] = i;
		if (m == k) result();
		else Try(m + 1);
	}
}


int main() {
	int t ; 
	cin >> t ; 
	while(t--) {
		cnt = 0 ; 
		cin >> n >> k;
		for(int i = 1 ; i <= k ;i++) cin >> b[i] ; 
		Try(1);
	}
	
}
