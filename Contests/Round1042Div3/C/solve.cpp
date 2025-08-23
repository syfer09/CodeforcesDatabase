// Date: August 10th, 2025
// Author: syfer
// Problem: round1042Cdiv3

#include <bits/stdc++.h>

using namespace std;

void solve() {
    long n, k;
    cin >> n >> k;
    vector <long> s;
    unordered_map<long,long> hash;
    for(long i = 0; i < n; i++){
        long s1;
        cin >> s1;
        s.push_back(s1%k);
    }
    for(long i = 0; i < n; i++){
        long t1;
        cin >> t1;
        if(hash.find(t1 % k) != hash.end()) hash[t1 % k]++;
        else
            hash[t1 % k] = 1;
    }
    for(long i = 0; i < n; i++){
        if(hash.find(s[i]) != hash.end() && hash[s[i]] > 0) {
            hash[s[i]]--;
        }
        else if ((hash.find(s[i]) == hash.end()) ||
                (hash.find(s[i]) != hash.end() && hash[s[i]] == 0)){
            if(hash.find(k-s[i]) == hash.end() || (hash[k - s[i]]) == 0){
                cout<<"NO"<<endl;
                return;
            }else
                hash[k - s[i]]--;
        }
    }
    cout << "YES" <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}

