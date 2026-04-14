#include <bits/stdc++.h>
using namespace std;
int main() {
    int t ;
    cin >> t ;
    while(t--) {
    	string s;
    	cin >> s;
   		int n = s.size();
    	int i = n - 1;
    	while (i >= 0 && s[i] == '0') {
        	i--;
    	}
		if (i < 0) {
        	for (int j = 0; j < n; j++) {
            	cout << '1';
        	}
        	cout << "\n" ; 
    	} else {
        	s[i] = '0';
        	for (int j = i + 1; j < n; j++) {
            	s[j] = '1';
        	}
        	cout << s << "\n" ; 
    	}
	}
}
