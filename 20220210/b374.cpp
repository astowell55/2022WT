#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    map<int, int> m;
    int maxval = 0 ;
    m.clear();
    while(n--){
        int num;
        cin >> num;
        m[num]++;
    }
    for(auto i:m){
        if(i.second >  maxval){
            maxval = i.second;
        }
    }
    for(auto i :m){
        if(i.second == maxval){
            cout << i.first << " " << i.second << "\n";
        }
    }
    }