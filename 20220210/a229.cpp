#include <bits/stdc++.h>
using namespace std;
string result(30, ' ');

void dfs(int l,int r,int k){
    if(r > l || l > k){
        return;
    }
    if(r + l == k * 2){
        cout << result <<"\n";
        return;
    }
    result[l + r] = '(';
    dfs(l + 1, r, k);
    result[l + r] = ')';
    dfs(l, r + 1, k);
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int key;
    while(cin >> key){
        dfs(0, 0, key);
        cout << "\n";
    }
}