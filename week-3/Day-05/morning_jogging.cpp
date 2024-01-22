#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		multiset<int> s[n];
		int ans[m][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int a;
				cin >> a;
				s[i].insert(a);
			}
		}
		for (int i = 0; i < m; i++) {
			int min_index = 0;
			int min_value = 2e9;
			for (int j = 0; j < n; j++) {
				int x = *s[j].begin();
				if (x < min_value) {
					min_value = x;
					min_index = j;
				}
			}
			for (int j = 0; j < n; j++) {
				if (j == min_index) {
					ans[i][j] = *s[j].begin();
					s[j].erase(s[j].begin());
				} else {
					ans[i][j] = *(prev(s[j].end()));
					s[j].erase(prev(s[j].end()));
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << ans[j][i] << " ";
			}
			cout << '\n';
		}
	}
    return 0;
}