#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        string s; cin >> s;

        reverse(s.begin(), s.end());

        vector<ll> v;
        ll j = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == '0') {
                v.push_back(i - j);
                j++;
            }
        }

        j = 0;
        for (int i = 1; i <= n; i++) {
            if(i > v.size()) {
                cout << -1 << ' ';
            }
            else {
                j += v[i-1];
                cout << j << ' ';
            }
        }

        cout << '\n';
    }
    return 0;
}