#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            sum = max (sum + x, 0LL);
        }

        cout << sum << '\n';
    }
    return 0;
}