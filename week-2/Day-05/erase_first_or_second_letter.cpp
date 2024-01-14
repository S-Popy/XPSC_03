#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        set<char> str;
        ll ans = 0;
        
        for (int i = 0; i < n; i++) {
            str.insert(s[i]);
            ans += str.size();
        }

        cout << ans << '\n';
    }

    return 0;
}