#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m; cin >> n >> m;
    vector<int>v1(n), v2(m);
    set<pair<int,int>>s;
 
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        s.insert({v1[i], i});
    }
 
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }
 
    for (int i = 0; i < m; i++) {
        auto it = s.lower_bound({v2[i] + 1, 0});
 
        if (it == s.begin()) {
            cout << -1 << '\n';
        }
        else {
            it--;
            cout << (*it).first << '\n';
            s.erase(it);
        }
    }
    return 0;
}
