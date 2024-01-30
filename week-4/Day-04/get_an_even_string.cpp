#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int ans = 0;
        bool cnt[26] = {};

        for (auto u : s) {
            if(!cnt[u - 'a']) {
                cnt[u - 'a'] = true;
                ans++;
            } else {
                fill(cnt, cnt+26, false);
                ans--;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}