#include <bits/stdc++.h>
using namespace std;
int n, a[100], X[100] ; 
vector<string> v ; 
void result(int n) {
	string s ;
	for(int i = 1 ; i <= n ; i++) {
		s += to_string(X[i]) + " " ; 
	}
	s.pop_back() ; 
	v.push_back(s) ; 
}
void Try(int i, int idx) {
	for (int j = idx + 1; j <= n; j++) {
        if (i == 1 || a[j] > X[i - 1]) {
            X[i] = a[j];
            if (i >= 2) result(i);  
            Try(i + 1, j);
        }
    }
}
void solve() {
	cin >> n ; 
	for(int i = 1; i <= n ; i++) cin >> a[i] ; 
	Try(1, 0);
    sort(v.begin(), v.end());
    for (auto &x : v) cout << x << "\n";
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 
	int t = 1 ;  
//	cin >> t; 
	while(t--) {
		solve() ; 
	}
}