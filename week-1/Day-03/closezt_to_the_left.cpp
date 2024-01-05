#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < k; i++) {
        int x; cin >> x;

        int l = -1, r = n;
        while (l + 1 < r) {
            int mid = l + (r - l) / 2;
            if(v[mid] <= x) {
                l = mid;
            } else {
                r = mid;
            }
        }

        cout << l + 1 << '\n';

    }
    return 0;
}