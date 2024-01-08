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

        if(v.back() == 1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<int> ans;
        for (int i = 0, j = -1; i < n; i++) {
            if(v[i] == 0) {
                ans.push_back(i - j - 1);
                for (int k = j + 1; k < i; k++) {
                    ans.push_back(0);
                }
                j = i;
            }
        }

        reverse (ans. begin(), ans.end());
        for (int i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}