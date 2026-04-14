#include <bits/stdc++.h>
using namespace std;

int a[100] = {0}, n;
void result() {
	for (int i = 1; i <= n; i++) {
		if(a[i] == 0) {
			cout << "A" ; 
		}
		else {
			cout << "B" ; 
		}
	}
	cout << " ";
}

void Try(int m) {
	for (int i = 0; i <= 1; i++) {
		a[m] = i;
		if (m == n) result();
		else Try(m+1);
	}
}


int main() {
	int t ;
	cin >> t ; 
	while(t--) {
		cin >> n;
		Try(1);
		cout << "\n" ; 
	}
}
