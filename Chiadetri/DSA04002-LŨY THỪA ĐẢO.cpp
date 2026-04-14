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



ll m = 1e9+7;

ll reverse(ll n)
{
    ll res = 0;
    while(n)
    {
        res = res*10 + n%10;
        n /= 10;
    }
    return res;
}

ll calc(ll n, ll k)
{
    if(k == 1) return n%m;
    ll x = calc(n, k/2);
    x = (x*x)%m;
    if(k%2) return (x*n)%m;
    return x;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        cout<<calc(n, reverse(n))<<"\n";
    }
}