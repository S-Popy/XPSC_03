#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t ;
 
	while(t--) {
		int n,k; cin >> n >> k;
		 vector<int> a(n);
         int mex  =0, mx = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			mx = max(a[i], mx);
		}

		sort(a.begin(), a.end());
		for(int i = 0; i < n; i++) {
			if(a[i] != mex) {
                break;
            } 
			mex++;
		}

		if(mex > mx){
			cout << n + k << '\n';
			continue;
		}

		ll x = (mex + mx) / 2 + (mex + mx) % 2;
		bool ok = false;
		for(int i = 0; i < n; i++){
			if(x == a[i]){
				ok = true;
				break;
			}
		}
		if(!ok && k) {
            cout << n + 1 << '\n';
        } else {
            cout << n << '\n';
        }
	}

    return 0;
}