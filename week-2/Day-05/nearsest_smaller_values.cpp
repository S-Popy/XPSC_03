#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    stack<pair<int,int>> st;
    for (int i = 0; i < n; i++) {
        while(!st.empty() && st.top().first >= v[i]) {
            st.pop();
        }
        if(st.empty()) {
            cout << 0 << ' ';
        }
        else {
            cout << st.top().second << ' ';
        }

        st.push({v[i], i + 1});
    }

    cout << '\n';
    return 0;
}