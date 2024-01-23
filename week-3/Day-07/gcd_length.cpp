#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        string x (a, '0'), y (b, '0');
        x[0] = '1';
        y[0] = '1';

        x[a-c] = '1';
        cout << x << ' ' << y << '\n';
    }
    return 0;
}