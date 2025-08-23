// Date: August 10th, 2025
// Author: syfer
// Problem: round1042Bdiv3

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n == 2){
        cout << "-1" << " 2" <<endl;
    }else{
       for(int i = 0;i < n - 1;i++){
           if(i%2 == 0){
               cout<< "-1 ";
           } else{
               cout<< "3 ";
           }
       }
       if(n % 2 == 0){
           cout<< "2" <<endl;
       } else 
           cout << "-1" <<endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

