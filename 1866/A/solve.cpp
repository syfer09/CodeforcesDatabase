// Date: August 23rd, 2025
// Author: syfer
// Problem: 1866A

#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, min, t;
    cin >> n;
    cin >> min;
    min = abs(min);
    for (int i = 0; i < n - 1; i++){
        cin >> t;
        if (abs(t) < min)
            min = abs(t);
    }
    cout << min << endl;
}

