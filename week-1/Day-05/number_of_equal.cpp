#include<bits/stdc++.h>
using namespace  std;
using ll = long long;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m, l, x, y;
    cin >> n >> m;
    int a[n], b[m];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0;
    ll ans = 0;

    while(i < n) {
        l = i+1;

        while(l < n && a[l] == a[i]) {
            l++;
        }
        x = l-i;

        while(j < m && a[i] > b[j]){
            j++;
        }
        y = 0;
        
        while(j < m && a[i] == b[j]){
            y++;
            j++;
        }

        ans += (1ll*x*y);
        i = l;
    }

    cout << ans << endl;

    return 0;
}

