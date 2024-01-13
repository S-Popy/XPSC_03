#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T> using ordered_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_set2 = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n; cin >> n;
    ordered_set1<int> st1;
    ordered_set2 <int> st2;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        st1.insert(v[i]);
    }

    ll ans = 0;
     for (int i = 0; i < n; i++) {
        st1.erase(v[i]);
        ans += 1LL * st1.order_of_key(v[i]) * st2.order_of_key(v[i]);
        st2.insert(v[i]);
     }

     cout << ans << '\n';

    return 0;
}