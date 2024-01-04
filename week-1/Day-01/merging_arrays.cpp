#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[m+n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;
    while(i < n || j < m){
        if(j == m || i < n && a[i] < b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = b[j];
            j++;
            k++;
        }
    }

    for(int p = 0; p < m + n; p++){
        cout << c[p] <<" ";
    }
    cout << endl;
    return 0;
}