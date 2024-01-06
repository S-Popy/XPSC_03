#include<bits/stdc++.h>
using namespace  std;
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

        vector<int> pq(q);
        for (int i = 0; i < q; i++) {
            cin >> pq[i];
        }

        int x = 31;
        for (auto u : pq) {
            if(u >= x) {
                continue;
            }

            for (auto &p : v) {
                if(p % (1 << u) == 0) {
                    p += (1 << (u - 1));
                }
            }
            x = u;
        }

        for (auto u : v) {
            cout << u << ' ';
        }
        cout << '\n';
    }
    return 0;
}