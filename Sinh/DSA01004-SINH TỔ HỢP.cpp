#include <bits/stdc++.h>
using namespace std;

int a[100] = {0}, n, k;

void result() {
	for (int i = 1; i <= k; i++) {
		cout << a[i] ;
	}
	cout << " ";
}

void Try(int m) {
	for (int i = a[m-1] + 1; i <= n - k + m; i++) {
		a[m] = i;
		if (m == k) result();
		else Try(m + 1);
	}
}


int main() {
	int t; 
	cin >> t ;
	while(t--) {
		cin >> n >> k ;
		Try(1) ; 
		cout << "\n" ; 
	}
}
