#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> v(n);
        for(int i = 1; i < n; i++) {
            cin >> v[i];
        }

       vector<ll> extra;
       vector<bool> vis (n + 1, 0);

       for (int i = 0; i < n - 1; i++) {
        ll num = v[i+1] - v[i];

        if(num >= 1 && num <= n && !vis[num]) {
            vis[num] = true;
        } else {
            extra.push_back(num);
        }
       }

       if(extra.empty()) {
        cout << "YES\n";
        continue;
       }
       if(extra.size() > 1) {
        cout << "NO\n";
        continue;
       }

       vector<int> rest;
       for (int i = 1; i <= n; i++) {
        if(!vis[i]) {
            rest.push_back(i);
        }
       }

       if(rest.size() == 2 && extra[0] == rest[0] + rest[1]) {
            cout << "YES\n";
       } else {
            cout << "NO\n";
       }
    }
    return 0;
}