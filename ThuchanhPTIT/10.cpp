#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 100005;
int parent[MAXN];
int find_set(int v) {
    if (parent[v] == v) return v;
    return parent[v] = find_set(parent[v]);
}
void union_set(int u, int v) {
    parent[u] = v;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<ll,ll>> jobs(n); 
    ll maxDeadline = 0;
    for(int i = 0; i < n; i++) {
        ll s, p;
        cin >> s >> p;
        jobs[i] = {p, s};
        maxDeadline = max(maxDeadline, s);
    }

    sort(jobs.rbegin(), jobs.rend()); 

    for(int i = 0; i <= maxDeadline; i++)
        parent[i] = i;

    ll ans = 0;

    for(auto job : jobs) {
        ll profit = job.first;
        ll deadline = job.second;

        int available = find_set(deadline);

        if(available > 0) {
            ans += profit;
            union_set(available, available - 1);
        }
    }

    cout << ans;
}