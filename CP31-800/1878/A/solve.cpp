// Date:
// Author: syfer
// Problem:

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int a;
    bool yes = false;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == k && !yes){
            yes = true;
            cout <<"YES" <<endl;
        }
    }
    if(!yes) cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

