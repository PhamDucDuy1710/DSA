#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ; 
    cin >> n ; 
    int a[n] ; 
    for(int i = 0 ; i < n ; i++) cin >> a[i] ; 
    sort(a,a+n) ; 
    bool ok = 0 ; 
    for(int i = 1 ;i < n ; i++) {
    	if(a[i] > a[0]) {
    		cout << a[0] << " " << a[i]  << "\n" ; 
    		ok = 1 ; 
    		break ; 
		}
	}
	if(!ok) cout << "-1\n" ; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t ;
	cin >> t ;
	while(t--) {
		solve() ; 
	}
}