#include<bits/stdc++.h>
using namespace std;
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
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        while(sum >= k) {
            ans += (n - i);
            sum -= arr[j];
            j++;
        }    
    }
    
    cout << ans << '\n';
    return 0;
}