#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <string> s(n);

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        bool flag = false;
        char ch = 'v';
        for (int i = 0; i < m; i++) {
            bool ok = false;
            for (int j = 0; j < n; j++) {
                if (s[j][i] == ch) {
                    ok = true;
                    break;
                }
            }

            if (ok == true) {
                if (ch == 'v') {
                    ch = 'i';
                }
                else if (ch == 'i') {
                    ch = 'k';
                }
                else if (ch == 'k') {
                    ch = 'a';
                }
                else {
                    flag = true;
                }
            }
        }

        if (flag == true) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
    return 0;
}