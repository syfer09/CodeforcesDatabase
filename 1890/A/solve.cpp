// Date: August 9th, 2025
// Author: syfer
// Problem: 1890A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int s1, s2, s, ns1 = 1, ns2 = 0;
    bool flip = false;
    cin >> s1 >> s2;
    if (s1 != s2){
        flip = true;
        ns2++;
    }else{
        ns1++;
    } 
    bool early = false;
    for(int i = 2; i < n;i++){
        cin >> s;
        if(flip){
            if (s != s1 && s != s2){
                early = true;
            }else if (s == s1)
                ns1++;
            else if (s == s2)
                ns2++;
        }else{
            if(s != s2){
                flip = true;
                s2 = s;
                ns2++;
            }else if (s == s1)
                ns1++;
            else if (s == s2)
                ns2++;
        }
    }
    if(early){
        cout<<"NO"<<endl;
        return;
    }
    if(s1 == s2){
        cout <<"Yes"<<endl;
    } else if (fabs(ns1-ns2) == n%2){
        cout <<"Yes"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

