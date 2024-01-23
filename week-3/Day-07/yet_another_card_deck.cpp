#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int arr[55];
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
        int n, q; cin >> n >> q;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if(!arr[x]) {
                arr[x] = i + 1;
            }
        }

        while(q--) {
            int k; cin >> k;
            cout << arr[k] << ' ';
            for (int i = 1; i <= 50; i++) {
                if(arr[i] && arr[i] < arr[k]) {
                    arr[i]++;
                }
            }

            arr[k] = 1;
        } 

    return 0;
}