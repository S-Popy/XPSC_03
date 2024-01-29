#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
        int n, m; cin >> n >> m;
        set<string> st;
        string s, ans;
        for (int i = 0; i < n; i++) {
            string p; cin >> p;
            st.insert(p);
            auto q = p;
            reverse (q.begin(), q.end());
            if(p == q) {
                s = p;
            } else if (st.count(q)) {
                ans += p;
            }
        }

        auto t = ans;
        reverse (t.begin(), t.end());
        ans += s + t;
        cout << ans.length() << '\n';
        cout << ans << '\n';
    
    return 0;
}