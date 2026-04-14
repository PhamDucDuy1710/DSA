#include <bits/stdc++.h>
using namespace std;
string d[] = {"02","20","22"} ; 
string y[] = {"2000","2002","2020","2022","2200","2202","2220","2222"} ; 
string x[4] ; 
void Try(int i) {
	if(i == 1) {
		for(int j = 0 ;j < 3; j++) {
			x[i] = d[j] ; 
			Try(i+1) ; 
		}
	}
	else if(i == 2) {
		x[i] = "02" ; 
		Try(i+1) ; 
		
	}
	else {
		for(int j = 0 ; j < 8 ;j++) {
			x[i] = y[j] ; 
			cout << x[1] << "/" << x[2] << "/" << x[3] << "\n" ;  
		}
	}
}
void solve() {
	Try(1) ; 
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