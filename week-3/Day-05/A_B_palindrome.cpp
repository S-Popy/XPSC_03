#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--) {
	
	ll a, b; cin >> a >> b;
	string s; cin >> s;
	ll n = s.size();
	s = '#' + s;
    bool ok = true;
	for(ll i = 1; i <= n; i++){
		if(s[i] != '?'){
			if(s[n - i + 1] == '?' || s[n - i + 1] == s[i]){
				s[n - i + 1] = s[i];
			}else{
				ok = false;
                break;
			}	
		}
	}

    if(!ok) {
        cout << -1 << '\n';
        continue;
    }

	vector <pair<ll, ll>> v;
	for(ll i = 1; i <= n/2; i++){
		if(s[i] != '?'){
			if(s[i] == '1') b -= 2;
			else a -= 2;
		}else{
			v.push_back({i , n - i + 1});
		}
	}
	if(n & 1 && s[(n + 1)/2] != '?'){
		if(s[(n + 1)/2] == '1') b--;
		else a--;
	}
	if(min(a,b) < 0){
		cout << "-1\n";
		continue;
	}
	if( (bool)(a & 1) && (bool)(b & 1) ){
		cout << "-1\n";
		continue;
	}
	if( (bool)(a & 1) || (bool)(b & 1) ){
		if( (n & 1) && s[(n + 1)/2] == '?'){
			if(a & 1) a-- , s[(n + 1)/2] = '0';
			else s[(n + 1)/2] = '1' , b--;
		}else{
			cout << "-1\n";
			continue;
		}
	}
	a /= 2;
	b /= 2;
	for(auto u : v){
		if(a){
			a--;
			s[u.first] = s[u.second] = '0';
		}else{
			b--;
			s[u.first] = s[u.second] = '1';
		}
	}
	for (int i = 1; i <= n; i++) {
     cout << s[i];
    }
	cout << '\n';
    }
    
    return 0;
}