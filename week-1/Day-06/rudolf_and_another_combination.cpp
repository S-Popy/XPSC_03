#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
    int n, m, h; cin >> n >> m >> h;
    vector<vector<int>> v (n, vector<int> (m));
    vector<pair<int, ll>> a(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }

    sort(v[i]. begin(), v[i]. end());

    ll cnt = 0, p = 0, sum = 0;
    for (auto u : v[i]) {
        if(sum + u <= h) {
            sum += u;
            p += sum;
            cnt++;
        }
    }

    a[i]  = {cnt, -p};
    }

    int ans = 1;
    for (int i = 1; i < n; i++) {
        ans += (a[0] < a[i]);
    }

    cout << ans << '\n';
    }
    return 0;
}