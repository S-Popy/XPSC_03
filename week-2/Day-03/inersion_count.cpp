#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ordered_set<int> st;
        long long ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            st.insert(v[i]);
            ans += st.order_of_key(v[i]);
        }

        cout << ans << '\n';
    } 

    return 0;
}