#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
 
    if (sum % 2 != 0) {
        cout << "NO\n";
        return 0;
    }
    
        cout << "YES\n";
        ll x = sum / 2;
 
        vector<int>v1, v2;
        ll sum2 = 0;
        for (int i = n; i >= 1; i--) {
            if(sum2 + i <= x) {
                v1.push_back(i);
                sum2 += i;
            } else {
                v2.push_back(i);
            }
        }
 
        cout << v1.size() << '\n';
        for (auto u : v1) {
            cout << u << ' ';
        }
        cout << '\n';
 
        cout << v2.size() << '\n';
        for (auto u : v2) {
            cout << u << ' ';
        }
        cout << '\n';
    
    return 0;
}
