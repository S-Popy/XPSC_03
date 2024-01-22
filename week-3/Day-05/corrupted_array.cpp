#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ll> b(n + 2);
		ll sum = 0;
		for (int i = 0; i < n + 2; i++) {
			cin >> b[i];
			sum += b[i];
		}
		sort(b.begin(), b.end());
		int counter = -1;
		for (int i = 0; i < n + 2; i++) {
			ll sum1 = sum - b[i] - (i != n + 1 ? b[n + 1] : b[n]);
			ll max_value = (i != n + 1 ? b[n + 1] : b[n]);
			if (sum1 == max_value) {
				counter = i;
				break;
			}
		}
		if (counter == -1) {
			cout << - 1 << '\n';
			continue;
		}
		vector<int> v1;
		for (int i = 0; i < n + 2; i++) {
			if (i != counter) {
				v1.push_back(b[i]);
			}
		}
		sort(v1.begin(), v1.end());
		for (int i = 0; i < n; i++) {
			cout << v1[i] << " ";
		}
		cout << '\n';
	}
    return 0;
}