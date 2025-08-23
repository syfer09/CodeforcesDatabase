// Date: August 10th, 2025
// Author: syfer
// Problem: round1042Adiv3

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    vector<int> a,b;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a1;
        cin >> a1;
        a.push_back(a1);
    }
    for(int i = 0; i < n; i++){
        int b1;
        cin >> b1;
        b.push_back(b1);
    }
    int maxdiff = 0;
    for(int i = 0; i < n; i++){
        if(a[i] - b[i] > 0)
            maxdiff += a[i] - b[i];
    }
    cout << maxdiff + 1<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

