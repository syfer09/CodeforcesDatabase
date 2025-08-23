// Date: August 11th, 2025
// Author: syfer
// Problem: 1877A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,a, ret = 0;
    cin >> n;
    for(int i = 0; i < n-1;i++){
        cin >> a;
        ret+=a;
    }
    cout << -ret<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

