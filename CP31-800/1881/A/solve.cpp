// Date: August 11th, 2025  
// Author: syfer
// Problem: 1881A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x,s;
    cin >> x;
    cin >> s;

    if(x.length() >= s.length()){

        if(x.find(s) != string::npos){
            cout << 0 << endl;
            return;
        }
        x+=x;
        if(x.find(s) != string::npos){
            cout << 1 << endl;
            return;
        } else{
            cout << -1<< endl;
            return;
        }
    }
    int i = 0;
    while(x.length() <= s.length() * 2){
        x+=x;
        i++;
        if(x.find(s) != string::npos){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

