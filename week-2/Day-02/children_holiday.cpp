#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll m, n; cin >> m >> n;
    vector<ll> t(n), z(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> z[i] >> y[i];
    }

    ll l = 0, r = 1e9;
    while(l < r) {
        ll mid = l + (r - l) / 2;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            ll all = z[i]* t[i] + y[i];
            ll s = mid / all;
            sum += ((s * z[i]) + min ((mid - s * all) / t[i], z[i]));
        }

        if(sum >= m) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << r << '\n';
    for (int i = 0; i < n; i++) {
        ll all = z[i]* t[i] + y[i];
        ll s = r / all;
        ll total = (s * z[i]) + (min ((r - s * all) / t[i], z[i]));
        cout << min (m, total) << ' ';
        m -= min (m, total);
    }
    cout << '\n';
    return 0;
}