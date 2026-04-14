#include<bits/stdc++.h>
using namespace std ; 
int n, ans; 
void Try(int n, int cnt) {
    if(n == 1) {
        ans = min(ans,cnt) ; 
        return ; 
    }
    if(n%3==0) Try(n/3,cnt+1) ; 
    if(n%2==0) Try(n/2,cnt+1) ; 
    if(cnt+1 < ans) Try(n-1,cnt+1) ; 
}
void solve() {
    cin >> n ;
    ans = n ; 
    Try(n,0) ; 
    cout << ans << "\n" ; 
}
int main() {
    int t ;
    cin >> t ;
    while(t--) {
        solve() ; 
    }
}