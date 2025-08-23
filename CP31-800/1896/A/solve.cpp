// Date: August 7th, 2025
// Author: syfer
// Problem: 1896A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,a;
    cin >> n;
    cin >> a;
    if (a == 1) cout << "YES" <<endl;
    else cout <<"NO" <<endl;
    for(int i = 1; i < n; i++) cin >> a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

