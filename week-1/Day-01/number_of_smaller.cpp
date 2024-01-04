#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[m+n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

   int arr[m];
    int i = 0;
    for(int j = 0; j < m; j++){
        while(i < n && a[i] < b[j]){
            i++;
        }
       arr[j] = i;
    }

    for(int j = 0; j < m; j++){
        cout << arr[j] <<" ";
    }
    cout << endl;

    return 0;
}