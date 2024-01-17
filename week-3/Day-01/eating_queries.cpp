#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());

        ll pref[n+1];
        pref[0] = 0;
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i-1] + v[i - 1];
        }

        while(q--) {
            int x; cin >> x;
            auto it = lower_bound(pref, pref+n+1, x);
            if(it == pref+ n + 1) {
                cout << -1 << '\n';
            } else {
                cout << it-pref << '\n';
            }

        }
    }
    return 0;
}