#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n, m; cin >> n >> m;

    ordered_set<int> st;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x);
    }

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        int ans = st.order_of_key(x);
        cout << ans << ' ';
    }

    cout << '\n';

    return 0;
}