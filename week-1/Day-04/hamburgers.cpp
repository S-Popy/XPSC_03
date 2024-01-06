#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s; cin >> s;
    int n = s.size();

    int cnt_b = 0, cnt_s = 0, cnt_c = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'B') {
            cnt_b++;
        }
        else if (s[i] == 'C') {
            cnt_c++;
        }
        else {
            cnt_s++;
        }
    }

    ll total_b, total_c, total_s;
    cin >> total_b >> total_s >> total_c;

    ll cost_b, cost_s, cost_c;
    cin >> cost_b >> cost_s >> cost_c;

    ll r; cin >> r;

    ll l = 0, h = r + 1000, ans = 0;
    while(l <= h) {
        ll mid = l + (h - l) / 2;

        ll b = max (mid * cnt_b - total_b, (ll) 0);
        ll s = max (mid * cnt_s - total_s, (ll) 0);
        ll c = max (mid * cnt_c - total_c, (ll) 0);

        ll z = (b * cost_b) + (s * cost_s) + (c * cost_c);

        if(z == r) {
            cout << mid << '\n';
            return 0;
        }

        if (z > r) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
            ans = mid;
        }
    }

    cout << ans << '\n';


    return 0;
}