#include <bits/stdc++.h>
using namespace std;

long long F[50];    
long long cntA[50];     

long long solve(int n, long long k) {
    if(k == 0) return 0;

    if(n == 0) return 1;  
    if(n == 1) return 0;  

    if(k <= F[n-1])
        return solve(n-1, k);
    else
        return cntA[n-1] + solve(n-2, k - F[n-1]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    F[0] = 1;
    F[1] = 1;
    cntA[0] = 1;  
    cntA[1] = 0;  

    for(int i = 2; i <= 45; i++) {
        F[i] = F[i-1] + F[i-2];
        cntA[i] = cntA[i-1] + cntA[i-2];
    }

    int t;
    cin >> t;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }
}