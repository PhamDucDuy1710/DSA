#include<bits/stdc++.h>
using namespace std ; 
int n;
long long S ;  
vector<long long> a ; 
int ans= INT_MAX ; 
void Try(int i, long long sum, int cnt) {
	if(sum == S) {
		ans = min(ans,cnt) ;
		return ;
	}
	if(i ==n || sum > S || cnt >= ans) {
		return ;
	}
	Try(i+1,sum + a[i],cnt+1) ;
	Try(i+1,sum,cnt) ; 
}
void solve() {
	cin >> n >> S ;  
	for(int i = 0;i < n ; i++) {
		int x ;
		cin >> x ; 
		a.push_back(x) ;  
	}
	Try(0,0,0) ; 
	if(ans == INT_MAX) {
		cout << "-1\n" ;
	}
	else {
		cout << ans << "\n" ; 
	}
}
int main() {
	int t = 1 ; 
	while(t--) {
		solve() ; 
	}
}