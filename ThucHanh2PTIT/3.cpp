#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; i++)
#define FD(i, a, b) for(int i = a; i > b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

long long solve(string s) {
    vector<string> v;
    stringstream ss(s);
    string x;
    while (ss >> x) v.push_back(x);
    stack<long long> st;

    auto isOp = [&](string t) {
        return t == "+" || t == "-" || t == "*" || t == "/";
    };
    auto calc = [&](long long a, long long b, string op) {
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        return a / b;
    };
    if (isOp(v[0])) {
        for (int i = v.size() - 1; i >= 0; i--) {
            if (!isOp(v[i])) {
                st.push(stoll(v[i]));
            } else {
                long long a = st.top(); st.pop();
                long long b = st.top(); st.pop();
                st.push(calc(a, b, v[i]));
            }
        }
    }
    else {
        for (int i = 0; i < v.size(); i++) {
            if (!isOp(v[i])) {
                st.push(stoll(v[i]));
            } else {
                long long a = st.top(); st.pop();
                long long b = st.top(); st.pop();
                st.push(calc(b, a, v[i]));
            }
        }
    }
    return st.top();
}

int main() {
    faster();
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin, s); 
        cout << solve(s) << "\n" ; 
    }
    return 0;
}
