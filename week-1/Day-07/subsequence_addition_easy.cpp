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
        sort(v.begin(), v.end());

        if(v[0] != 1) {
            cout << "NO\n";
            continue;
        }

        ll sum = v[0];
        bool ok = true;
        for (int i = 1; i < n; i++) {
            if(v[i] <= sum) {
                sum += v[i];
            } else {
                ok = false;
                break;
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