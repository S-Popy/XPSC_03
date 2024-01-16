#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int k, n, m; cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        vector<int> ans;
        int i = 0, j = 0;
        bool ok = true;

        while (i < n || j < m) {
            int cnt = 0;
            if(i < n) {
                if(a[i] <= k) {
                    k += (a[i] == 0);
                    ans.push_back(a[i]);
                    i++;
                } else {
                    cnt++;
                }
            } else {
                cnt++;
            }

            if(j < m) {
                 if(b[j] <= k) {
                    k += (b[j] == 0);
                    ans.push_back(b[j]);
                    j++;
                } else {
                    cnt++;
                }
            } else {
                cnt++;
            }

            if(cnt == 2) {
                ok = false;
                break;
            }
            
    }

    if(!ok) {
        cout << -1 << '\n';
    } else {
        for(auto u : ans) {
            cout << u << ' ';
        }
        cout << '\n';
    }
    }
    return 0;
}