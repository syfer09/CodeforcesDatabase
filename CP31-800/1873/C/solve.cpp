// Date: August 11th, 2025
// Author: syfer
// Problem: 1873C

#include <bits/stdc++.h>

using namespace std;

void solve() {
    string row;
    int ret = 0;
    for(int i = 0;i < 10;i++){
        cin >> row;
        for(int j = 0; j < 10; j++){
            if(row[j] == 'X'){
                if(i == 0 || j == 0 || i == 9 || j == 9)
                    ret += 1;
                else if((i == 1 && j > 0 && j < 9) 
                        || (j == 1 && i > 0 && i < 9) 
                        || (i == 8 && j > 0 && j < 9) 
                        || (j == 8 && i > 0 && i < 9))
                    ret += 2;
                else if((i == 2 && j > 1 && j < 8) 
                        || (j == 2 && i > 1 && i < 8) 
                        || (i == 7 && j > 1 && j < 8) 
                        || (j == 7 && i > 1 && i < 8))
                    ret += 3;
                else if((i == 3 && j > 2 && j < 7) 
                        || (j == 3 && i > 2 && i < 7) 
                        || (i == 6 && j > 2 && j < 7) 
                        || (j == 6 && i > 2 && i < 7))
                    ret += 4;
                else if((i == 4 && j > 3 && j < 6) 
                        || (j == 4 && i > 3 && i < 6) 
                        || (i == 5 && j > 3 && j < 6) 
                        || (j == 5 && i > 3 && i < 6))
                    ret += 5;
            }
        }
    }
    cout << ret <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

