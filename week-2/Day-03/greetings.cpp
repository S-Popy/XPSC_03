#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
 
        sort(v.begin(), v.end());
 
        ordered_set<int> st;
        for (auto u: v) {
            st.insert(u.second);
        }
 
        long long ans = 0;
 
        for (int i = 0; i < n; i++) {
            ans += st.order_of_key(v[i].second);
            st.erase(v[i].second);
        }
 
        cout << ans << '\n';
    }
    return 0;
}