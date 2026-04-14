#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long nhon = 0, vuong = 0, tu = 0;
    for(int k = 2; k < n; k++){
        for(int j = 1; j < k; j++){
            int L = 0, R = j - 1, pos = j;
            while(L <= R){
                int mid = (L + R) / 2;
                if(a[mid] + a[j] > a[k]){
                    pos = mid;
                    R = mid - 1;
                } else L = mid + 1;
            }
            if(pos >= j) continue;
            for(int i = pos; i < j; i++){
                long long l = a[i]*a[i] + a[j]*a[j];
                long long r = a[k]*a[k];
                if(l == r) vuong++;
                else if(l > r) nhon++;
                else tu++;
            }
        }
    }
    cout << nhon << " " << vuong << " " << tu;
}