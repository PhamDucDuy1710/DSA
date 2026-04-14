#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // dp[j] lưu số lượng phần tử tối đa để tổng chia k dư j
    // Khởi tạo với giá trị cực tiểu để đánh dấu trạng thái chưa đạt được
    vector<int> dp(k, -1e9);
    dp[0] = 0; 

    for (int i = 0; i < n; ++i) {
        vector<int> next_dp = dp;
        int remainder = a[i] % k;
        
        for (int j = 0; j < k; ++j) {
            if (dp[j] != -1e9) {
                int next_rem = (j + remainder) % k;
                next_dp[next_rem] = max(next_dp[next_rem], dp[j] + 1);
            }
        }
        dp = next_dp;
    }

    // Kết quả là số lượng phần tử lớn nhất có tổng chia hết cho k (dư 0)
    cout << dp[0] << endl;
}

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}