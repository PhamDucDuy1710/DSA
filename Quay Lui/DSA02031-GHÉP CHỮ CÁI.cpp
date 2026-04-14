
#include <bits/stdc++.h>
using namespace std;

char c;
string s;
int vs[127];

bool check(char c) {
    return (c != 'A' && c != 'E');
}

void result() {
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A' || s[i] == 'E') {
            if (i > 0 && i < s.length() - 1 && check(s[i - 1]) && check(s[i + 1]))
                return;
        }
    }
    cout << s << endl;
}

void Try(char i) {
    for (char j = 'A'; j <= c; ++j) {
        if (!vs[j]) {
            vs[j] = 1;
            s.push_back(j);
            if (s.length() == c - 'A' + 1) result();
            else Try(i + 1);
            vs[j] = 0;
            s.pop_back();
        }
    }
}

void solve() {
    cin >> c;
    Try('A');
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); 

    solve() ; 
}