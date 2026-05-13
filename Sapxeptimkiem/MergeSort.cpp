#include <bits/stdc++.h>
using namespace std;

void Combine(vector<int> &a, int L, int M, int R) {
    int i = L, j = M + 1;
    vector<int> temp;

    while(i <= M && j <= R) {
        if(a[i] <= a[j]) {
            temp.push_back(a[i]);
            i++;
        } else {
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i <= M) {
        temp.push_back(a[i]);
        i++;
    }
    while(j <= R) {
        temp.push_back(a[j]);
        j++;
    }
    for(int k = 0; k < temp.size(); k++) {
        a[L + k] = temp[k];
    }
}


void MergeSort(vector<int> &a, int L, int R) {
    if(L < R) {
        int M = (L + R) / 2;

        MergeSort(a, L, M);
        MergeSort(a, M + 1, R);
        Combine(a, L, M, R);
    }
}

void solve() {
    int n; 
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    MergeSort(a, 0, n - 1);

    for(int x : a) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}