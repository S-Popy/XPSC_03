#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
       map<int,int> mp;

        for(int i = 0; i< n; i++) {
            int x; cin >> x;
            mp[x]++;
        }

        int mx = INT_MIN;
        for (auto u : mp) {
            int y = u.second;
            mx = max (mx, y);
        }

        int ans = 0;
        while(mx < n) {
           ans++;
           ans += min (mx, n - mx);
           mx = min (n, 2 * mx);
        }

        cout << ans << '\n';
    }
    return 0;
}