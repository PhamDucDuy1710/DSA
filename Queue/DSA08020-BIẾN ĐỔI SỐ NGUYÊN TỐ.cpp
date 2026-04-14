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
vector<bool> prime(1e5, 1);

void Sieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i < 1e5; ++i) {
        if (prime[i]) {
            for (int j = i * i; j < 1e5; j += i) {
                prime[j] = false;
            }
        }
    }
}
int to_int(string s) {
    int num = 0; 
    for(auto x : s) {
        num = num * 10 + (x - '0') ; 
    }
    return num ; 
}
void solve() {
    string a, b ;
    cin >> a >> b ;
    vector<bool> m(1e5,false) ; 
    queue<pair<string,int>> q ;
    q.push({a,0}) ; 
    while(!q.empty()) {
        pair<string,int> p = q.front() ; q.pop() ; 

        if(p.first == b) {
            cout << p.second << "\n" ; 
            return ; 
        } 
        
        for(int i = 0 ; i <4 ; i++) {
            for(int j = 0 ; j <= 9 ; j++) {
                if((i == 0 && j == 0) || j == (p.first[i] - '0')) continue ;
                string tmp = p.first ; 
                tmp[i] = j + '0' ;
                int num = to_int(tmp) ; 
                if(prime[num] && !m[num]) {
                    q.push({tmp,p.second + 1}) ; 
                    m[num] = 1 ; 
                }
            }
        }
    }

}

int main() {
    Sieve() ; 
    faster();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}