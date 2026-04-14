#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        stack<char> st;
        string res = "";

        for (char c : s) {
            // Toán hạng
            if (isalnum(c)) {
                res += c;
            }
            // Mở ngoặc
            else if (c == '(') {
                st.push(c);
            }
            // Đóng ngoặc
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    res += st.top();
                    st.pop();
                }
                st.pop(); // bỏ '('
            }
            // Toán tử
            else {
                while (!st.empty() && 
                      (priority(st.top()) > priority(c) ||
                      (priority(st.top()) == priority(c) && c != '^'))) {
                    res += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        cout << res << "\n";
    }
    return 0;
}
