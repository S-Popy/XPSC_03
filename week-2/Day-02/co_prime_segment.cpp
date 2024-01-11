#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int j, ans = INT_MAX;
    ll gc = 0;
    for (int i = 0; i < n; i++) {
        gc = __gcd(gc, v[i]);
        if(v[i] == 1) {
            ans = 1;
        }
        else if (gc == 1) {
            gc = v[i];
            for (j = i - 1; __gcd(gc, v[j]) != 1; j--) {
                gc = __gcd(gc, v[j]);
            }
            ans = min (ans, i - j + 1);
        }
    }

    if (ans > n) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }

    return 0;
}