// Date: August 7th, 2025
// Author: syfer
// Problem: 1900A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, r = 0, x = 0;
    cin >> n;
    string s; 
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '.'){
            x++;
            r++;
        }else if (s[i] == '#') 
            r = 0;
        if(r == 3){
            cout<<2<<endl;
            return;
        }
    }
    cout<<x<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

