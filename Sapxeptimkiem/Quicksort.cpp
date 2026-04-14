#include <bits/stdc++.h>
using namespace std;
int Partition(int a[], int l, int r) {
	int x = a[r] ; 
	int i = l - 1; 
	for(int j = l ; j <= r - 1 ; j++) {
		if(a[j] <= x) {
			i++ ; 
			swap(a[i],a[j]) ;
		}
	}
	swap(a[i+1],a[r]) ; 
	return i + 1 ; 
}
void Quicksort(int a[], int l, int r) {
	if(l < r) {
		int tmp = Partition(a,l,r) ; 
		Quicksort(a,l,tmp-1) ; 
		Quicksort(a,tmp+1,r) ; 
	}
}
void solve() {
    int n ; 
    cin >> n ; 
    int a[n] ; 
    for(int i = 0 ; i < n ; i++) {
    	cin >> a[i] ; 
	}
	Quicksort(a,0,n-1) ; 
	for(int i =0  ;i < n ; i++) {
		cout << a[i] << " " ; 
	}
	cout << "\n" ;    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}