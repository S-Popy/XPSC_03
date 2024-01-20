#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

        int n; cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
        }

        int m; cin >> m;

        while(m--) {
            ll x, y; cin >> x >> y;
            auto it = lower_bound(v.begin(), v.end(), x);
            ll ans = 3e18;

            if(it != v.end()) {
                ll s = sum - *it;
                ans = min (ans, max(0LL, x - *it) + max (0LL, y - s));

            }

            if(it != v.begin()) {
                it--;
                ll s = sum - *it;
                ans = min (ans, max (0LL, x - *it) + max (0LL, y - s));

            }

            cout << ans << '\n';
        }
    
    return 0;
}