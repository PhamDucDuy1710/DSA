#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;

void result() {
	if (s[0] == 'H' && s[n - 1] == 'A' && s.find("HH") == string::npos) {
		res.push_back(s);
	}
}

void Try(int m) {
	for (int i = 0; i <= 1; i++) {
		if (i == 0) s[m] = 'H';
		else s[m] = 'A';

		if (m == n - 1) result();
		else Try(m + 1);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		s.resize(n);
		res.clear();
		Try(0);
		sort(res.begin(), res.end()) ; 
		for (auto x : res) {
			cout << x << "\n";
		}
	}
}
