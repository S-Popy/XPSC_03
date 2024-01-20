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
            cin >>v[i];
        }

        if(v[0] != n && v [n-1] != n) {
            cout << -1 << '\n';
            continue;
        }

        if(v[0] == n) {
            reverse(v.begin() + 1, v.end());

        } else {
            reverse (v.begin(), v.end()-1);
        }

        for(int i = 0; i < n; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}