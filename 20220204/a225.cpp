#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    if (a % 10 == b % 10){
        return a > b;
    }
    if (a % 10 > b % 10){
        return false;
    }
    if(a % 10 < b % 10){
        return true;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    vector<int> v;
    while(cin >> n){
        while(n--){
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end(), cmp);
        for(auto i:v){
            cout << i << " ";
        }
        cout << "\n";
        v.clear();
        
    }
}