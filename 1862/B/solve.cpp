// Date: August 23rd, 2025
// Author: syfer
// Problem: 1862B

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, b;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        cin >> b;
        if(i != 0 && a[a.size() - 1] > b)
            a.push_back(b-1 == 0 ? 1 : b - 1);
        a.push_back(b);
    }
    cout << a.size() <<endl;
    for(int i = 0; i < a.size();i++){
        cout<< a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

