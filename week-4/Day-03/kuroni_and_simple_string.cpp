#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s; cin >> s;
    vector<int> l, r;
    for (int i = 1; i <= s.size(); i++) {
        if(s[i-1] == '(') {
            l.push_back(i);
        } else {
            r.push_back(i);
        }
    }

    vector<int> ans;
    reverse (l.begin(), l.end());
    while(l.size() && r.size() && l.back() < r.back()) {
        ans.push_back(l.back());
        l.pop_back();
        ans.push_back(r.back());
        r.pop_back();
    }

    if(ans.size() == 0) {
        cout << 0 << '\n';
    } else {
        cout << 1 << '\n';
        cout << ans.size() << '\n';
        sort(ans.begin(), ans.end());
        for (auto u : ans) {
            cout << u << ' ';
        }
        cout << '\n';
    }
    return 0;
}