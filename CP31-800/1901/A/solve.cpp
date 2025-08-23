// Date: August 7th, 2025
// Author: syfer
// Problem: 1901A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x, m = 0, cur = 0, prev = 0;
    cin >> n >> x;
    for(int i = 0; i < n;i++){
        cin >> cur;
        if (cur - prev > m) m = cur - prev;
        prev = cur;
    }
    cout << max(m, (x - cur)*2) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
