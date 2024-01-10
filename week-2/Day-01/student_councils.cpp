#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool ok (ll mid, vector<ll> &v, int k) {
    ll tmp = mid;
    mid *= k;

    for (auto u : v) {
        mid -= min(tmp, u);
    }

    return mid <= 0;
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
        int k, n;
        cin >> k >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll l = 0, r = 1e12;
        while (l <= r) {
            ll mid = l + (r - l) / 2;
            if(ok(mid, v, k)) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        cout << l - 1 << '\n';
    
    return 0;
}