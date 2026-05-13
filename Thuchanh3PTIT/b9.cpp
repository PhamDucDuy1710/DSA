#include <bits/stdc++.h>

using namespace std;

void inorder(vector<int>& A, int i, int n) {
    if (i >= n) return;
    inorder(A, 2 * i + 1, n);
    cout << A[i] << " ";
    inorder(A, 2 * i + 2, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        inorder(A, 0, N);
        cout << endl;
    }
    return 0;
}