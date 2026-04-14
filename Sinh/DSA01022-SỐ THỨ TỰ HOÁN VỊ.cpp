#include<bits/stdc++.h>
using namespace std ; 
int a[100] = {0}, n, cnt  ,  b[100] ;   
bool chuaXet[100];
void result() {
	cnt++ ; 
	bool ok = 0 ; 
	for(int i = 1 ; i <= n ; i++) {
		if(a[i] != b[i]) {
			ok = 1 ; 
			break ; 
		}
	}
	if(ok == 0) {
		cout << cnt << "\n" ; 
	}
}

void Try(int m) {
	for (int i = 1; i <= n; i++) {
		if (chuaXet[i]) {
			chuaXet[i] = false;
			a[m] = i;
			if (m == n) result();
			else Try(m + 1);
			chuaXet[i] = true;
		}
	}
}
int main() {

	int t ;
	cin >> t ;
	while(t--) {
		cnt = 0 ; 
		memset(chuaXet,true,sizeof(chuaXet)) ; 
		cin >> n ; 
		for(int i = 1 ; i <= n ;i++) {
			cin >> b[i] ; 
		}
		Try(1) ; 
	}
}