#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a (n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int l = 0, r = n - 1;
        while(a[l] == b[l]) {
            l++;
        }
         while(a[r] == b[r]) {
            r--;
        }

        while( l && b[l] >= b[l - 1]) {
            l--;
        }
        while(r + 1 < n && b[r] <= b[r + 1]) {
            r++;
        }

        cout << l + 1 << ' ' << r + 1 << '\n';
    }
    return 0;
}