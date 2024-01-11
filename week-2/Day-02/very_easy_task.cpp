#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

bool ok ( int mid, int n, int x, int y) {
    if(mid < min (x, y)) {
        return false;
    }

    mid -= min(x, y);
    int cnt = (mid/x) + (mid/y) + 1;
    return cnt >= n;
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, x, y; cin >> n >> x >> y;
    int l = 0, r = max(x, y) * n;
    int ans = 0;

    while (l <= r) {
        int mid = l + ( r - l) / 2;
        if(ok(mid, n, x, y)) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << r + 1 << '\n';
    return 0;
}