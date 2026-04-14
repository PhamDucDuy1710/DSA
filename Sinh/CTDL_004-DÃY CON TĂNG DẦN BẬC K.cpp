#include<bits/stdc++.h>
using namespace std ;
int n, k, a[100], X[100] ; 
int cnt ; 
void Try(int i, int idx) {
	for (int j = idx + 1; j <= n; j++) {
        if (i == 1 || a[j] > X[i - 1]) {
            X[i] = a[j];
            if (i == k) cnt++ ;   
            Try(i + 1, j);
        }
    }
}
void solve() {
	cnt = 0 ; 
    cin >> n >> k ; 
	for(int i = 1; i <= n ; i++) cin >> a[i] ; 
	Try(1, 0);
    cout << cnt << "\n" ; 
}
int main() {
    int t = 1  ; 
    while(t--) {
        solve() ; 
    }
}