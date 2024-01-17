#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, s; cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int ans = n + 1;
        int cur = 0;
        for (int i = 0, j = 0; i < n; i++) {
            while(j < n && cur + v[j] <= s) {
                cur += v[j];
                j++;
            }

            if(cur == s) {
                ans = min (ans, n - (j - i));
            }
            cur -= v[i];
        }

        if(ans > n) {
            cout << -1 << '\n';
        } else {
            cout << ans << '\n';
        }
    }
    return 0;
}