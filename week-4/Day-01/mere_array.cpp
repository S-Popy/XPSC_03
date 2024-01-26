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

        vector<int> a = v;
        sort(a.begin(), a.end());
        int mn = a[0];
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if(v[i] != a[i] && (v[i] % mn != 0 || a[i] % mn != 0)) {
                ok = false;
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