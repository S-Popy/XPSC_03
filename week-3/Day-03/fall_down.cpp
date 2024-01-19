#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        for (int j = 0; j < m; j++) {
            int last = n;
            for (int i = n - 1; i >= 0; i--) {
                if(s[i][j] == 'o') {
                    last = i;
                } else if (s[i][j] == '*') {
                    s[i][j] = '.';
                    last--;
                    s[last][j] = '*';
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << s[i] << '\n';
        }
    }
    return 0;
}