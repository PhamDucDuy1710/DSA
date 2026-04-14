#include<bits/stdc++.h>
using namespace std;

// Xóa số 0 dư ở đầu
string trimZero(string s){
    while(s.length() > 1 && s[0] == '0')
        s.erase(0,1);
    return s;
}

// Cộng số lớn
string Plus(string a, string b)
{
    int len = max(a.length(), b.length());
    while (a.length() < len) a = "0" + a;
    while (b.length() < len) b = "0" + b;

    string res = "";
    int carry = 0;

    for (int i = len - 1; i >= 0; i--) 
    {
        int digit = (a[i] - '0') + (b[i] - '0') + carry;
        carry = digit / 10;
        res = char(digit % 10 + '0') + res;
    }

    if (carry > 0)
        res = char(carry + '0') + res;

    return trimZero(res);
}

// Trừ số lớn (giả sử a >= b)
string Minus(string a, string b)
{
    int len = max(a.length(), b.length());
    while (a.length() < len) a = "0" + a;
    while (b.length() < len) b = "0" + b;

    if (a < b) swap(a, b);

    string res = "";
    int borrow = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        int digit = (a[i] - '0') - (b[i] - '0') - borrow;
        if (digit < 0)
        {
            digit += 10;
            borrow = 1;
        }
        else borrow = 0;

        res = char(digit + '0') + res;
    }

    return trimZero(res);
}

// Karatsuba
string Karatsuba(string x, string y, int n)
{
    if (n == 1)
    {
        int mul = (x[0] - '0') * (y[0] - '0');
        return to_string(mul);
    }

    if (n % 2 != 0) n++;

    while (x.length() < n) x = "0" + x;
    while (y.length() < n) y = "0" + y;

    int m = n / 2;

    string a = x.substr(0, m);
    string b = x.substr(m);
    string c = y.substr(0, m);
    string d = y.substr(m);

    string U = Karatsuba(a, c, m);
    string V = Karatsuba(b, d, m);
    string W = Karatsuba(Plus(a, b), Plus(c, d), m);

    string part1 = U + string(n, '0');

    string middle = Minus(Minus(W, U), V);
    string part2 = middle + string(m, '0');

    return trimZero(Plus(Plus(part1, part2), V));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x, y;
    cin >> x >> y;

    int n = max(x.length(), y.length());
    if (n % 2 != 0) n++;

    while (x.length() < n) x = "0" + x;
    while (y.length() < n) y = "0" + y;

    cout << Karatsuba(x, y, n);
}