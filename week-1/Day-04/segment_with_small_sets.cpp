#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int cnt[100002];
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int j = 0, ele = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
            cnt[v[i]]++;
            if(cnt[v[i]] == 1) {
                ele++;
            }

        while(ele > k) {
           cnt[v[j]]--;
           if(cnt[v[j]] == 0) {
            ele--;
           }
           j++;
        }
        ans += i - j + 1;
    }

    cout << ans << '\n';
    return 0;
}