// Date: August 7th 2025
// Author: syfer
// Problem: 1903A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for(int i = 0; i < n;i++){
        int an;
        cin >> an;
        a.push_back(an);
    }
    if(is_sorted(a.begin(), a.end()) || k >= 2){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

