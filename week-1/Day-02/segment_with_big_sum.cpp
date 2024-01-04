#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    ll k; 
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int j = 0;
    ll sum = 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        while(sum - arr[j] >= k) {
            sum -= arr[j];
            j++;
        }

        if(sum >= k) {
            ans = min(ans, i-j+1);
        }
       
    }

    if(ans == INT_MAX) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
    return 0;
}