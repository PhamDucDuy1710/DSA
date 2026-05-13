#include <bits/stdc++.h>
using namespace std;

// Xóa số 0 dư ở đầu
string trimZero(string s){
    while(s.size() > 1 && s[0] == '0') s.erase(0,1);
    return s;
}

// Cộng số lớn
string Plus(string a, string b){
    int len = max(a.size(), b.size());
    while(a.size() < len) a = "0" + a;
    while(b.size() < len) b = "0" + b;

    string res = "";
    int carry = 0;

    for(int i = len - 1; i >= 0; i--){
        int sum = (a[i]-'0') + (b[i]-'0') + carry;
        carry = sum / 10;
        res = char(sum % 10 + '0') + res;
    }

    if(carry) res = char(carry + '0') + res;
    return trimZero(res);
}

// Trừ số lớn (a >= b)
string Minus(string a, string b){
    int len = max(a.size(), b.size());
    while(a.size() < len) a = "0" + a;
    while(b.size() < len) b = "0" + b;

    string res = "";
    int borrow = 0;

    for(int i = len - 1; i >= 0; i--){
        int diff = (a[i]-'0') - (b[i]-'0') - borrow;
        if(diff < 0){
            diff += 10;
            borrow = 1;
        } else borrow = 0;

        res = char(diff + '0') + res;
    }

    return trimZero(res);
}

// Karatsuba
string Karatsuba(string x, string y){
    x = trimZero(x);
    y = trimZero(y);

    int n = max(x.size(), y.size());

    // base case
    if(n <= 2){
        return to_string(stoll(x) * stoll(y));
    }

    // làm cho n chẵn
    if(n % 2) n++;

    while(x.size() < n) x = "0" + x;
    while(y.size() < n) y = "0" + y;

    int m = n / 2;

    string a = x.substr(0, m);
    string b = x.substr(m);
    string c = y.substr(0, m);
    string d = y.substr(m);

    string U = Karatsuba(a, c);
    string V = Karatsuba(b, d);

    string ab = Plus(a, b);
    string cd = Plus(c, d);

    string W = Karatsuba(ab, cd);

    string middle = Minus(Minus(W, U), V);

    // nhân với 10^n và 10^(n/2)
    string part1 = U + string(n, '0');
    string part2 = middle + string(m, '0');

    return trimZero(Plus(Plus(part1, part2), V));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x, y;
    cin >> x >> y;

    cout << Karatsuba(x, y);
}