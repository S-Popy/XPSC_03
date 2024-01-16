#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        p.push_back({y, x});
    }

    sort(p.begin(), p.end());
    
    int m = p[0].first;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(p[i].second >= m) {
            ans++;
            m = p[i].first;
        }
    }

    cout << ans << '\n';
    return 0;
}