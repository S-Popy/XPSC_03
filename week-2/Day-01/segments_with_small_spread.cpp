#include<bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    multiset<ll> s;
    int j = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        s.insert(v[i]);

        while((*s.rbegin() - *s.begin() > k) && !s.empty()) {
            s.erase(s.find(v[j]));
            j++;
        }

        ans += (i - j + 1);
    }

    cout << ans << '\n';
    return 0;
}