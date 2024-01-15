#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        v.push_back({x, +1});
        v.push_back({y, -1});
    }

    sort(v.begin(), v.end());

    int ans = INT_MIN;
    int sum = 0;
    for (auto u : v) {
        int p = u.second;
        sum += p;
        ans = max (ans, sum);
    }

    cout << ans << '\n';
    return 0;
}