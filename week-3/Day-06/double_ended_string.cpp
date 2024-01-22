#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
	cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		int ans = a.length() + b.length();
		int n = a.length(), m = b.length();
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				string p = a.substr(i, j - i + 1);
				int ans1 = n - (j - i + 1);
				int ans2 = m - (j - i + 1);
				for (int k = 0; k < m; k++) {
					string q = b.substr(k, min(m - k, j - i + 1));
					if (p == q) {
						ans = min(ans, ans1 + ans2);
					}
				}
			}
		}
		cout << ans << '\n';
	}

    return 0;
}