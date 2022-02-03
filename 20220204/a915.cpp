#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for(auto i :  v){
        cout << i.first << " " << i.second << "\n";
    }
}