#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        
        if((n-k) % 2 == 0 && n >= 1LL* k * k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        }
    return 0;
}