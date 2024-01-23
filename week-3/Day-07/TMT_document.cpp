#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int t = 0, tm = 0, tmt = 0;
        bool ok = true;
        int cnt = 0, total = count(s.begin(), s.end(), 'T');

        for (int i = 0; i < n; i++) {
            if(s[i] == 'T') {
                if(cnt < total/2) {
                    t++;
                } else {
                    ok &= (tm > 0);
                    tm--;
                    tmt++;
                }
                cnt++;
            } else {
                ok &= (t > 0);

                if(t) {
                    tm++;
                    t--;
                }
            }
        }

        if(ok && tmt == n/3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}