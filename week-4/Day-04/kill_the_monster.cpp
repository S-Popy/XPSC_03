#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc >> hm >> dm >> k >> w >> a;

        bool ok = false;
        for (int i = 0; i <= k; i++) {
            ll h = hc + a * i;
            ll d = dc + w * (k - i);

            ll cm = (hm + d - 1) / d;
            ll mc = (h + dm - 1) / dm;

            if(cm <= mc) {
                ok = true;
                break;
            }
        }

        if(ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}