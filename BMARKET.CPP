#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("BMARKET.INP", "r", stdin);
    freopen("BMARKET.OUT", "w", stdout);
    long int y,k,n;
    cin >> y >> k >> n;
    n-=y;
    bool flag = false;
    long int mod=2*k-(y%k);
    mod%=k;
    if (mod>n){
        cout << -1;
        return 0;
    }
    for (int i=mod;i<=n;i+=k){
        if (i<=n&&i!=0){
            cout << i << ' ';
            flag=true;
        }
    }
    if (flag==false){
        cout << -1;
    }
}