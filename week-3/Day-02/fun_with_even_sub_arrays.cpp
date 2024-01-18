#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

    int p = v[n-1];
    int l = n;
    while (l > 0 && v[l-1] == p) {
        l--;
    }

    int ans = 0;
    while(l > 0) {
        l = max(0, 2 * l - n);
        while(l > 0 && v[l-1] == p) {
            l--;
        }
        ans++;
    }

    cout << ans << '\n';
    }
    return 0;
}