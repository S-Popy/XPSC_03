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

        set<int> s;
        int i = 0;
        ll sum = 0;
        while(i < n) {
            if(v[i] < 0) {
                while(v[i] < 0 && i < n) {
                    s.insert(v[i]);
                    i++;
                }
            } else {
                while(v[i] > 0 && i < n) {
                    s.insert(v[i]);
                    i++;
                }
            }

        auto it = s.rbegin();
        sum += *it;
        s.clear();
    }
    cout << sum << '\n';
    }
    return 0;
}