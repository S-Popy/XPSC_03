#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    vector<int> v (n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q; cin >> q;
    while (q--){
        int s, e; cin >> s >> e;

        int p, q;

        int l = 0, r = n - 1, indx = n;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if(v[mid] < s) {
                l = mid + 1;
            } else {
                r = mid - 1;
                indx = mid;
            }
        }

        p = indx;

        l = 0, r = n - 1, indx = n;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if(v[mid] <= e) {
                l = mid + 1;
            } else {
                r = mid - 1;
                indx = mid;
            }
        }

        q = indx;

        cout << q - p << ' ';
    }
    return 0;
}