#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n) {
    for(int i = 0 ;i < n ; i++) {
        ok = false ; 
        for(int i = 0 ; i < n - 1; i++) {
            if(a[j] > a[j-1]) {
                ok = true ; 
                swap(a[j],a[j+1]) ; 
            }
        }
        if(ok) break 
    } 
}
void solve() {
    
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