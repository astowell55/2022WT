#include <bits/stdc++.h>
using namespace std;
vector<int> result(13,0) ;
vector<bool> visited(13,false);

void dfs(int index,int key){
    if(index == key +1){
        for (int i = 1; i <= key;i++){
            cout << result[i];
        }
        cout << "\n";
    }
    for (int i = key; i >= 1; i--){
        if(!visited[i]){
            result[index] = i;
            visited[i] = true;
            dfs(index + 1, key);
            visited[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int key;
    while(cin >> key){
      dfs(1,key);  
    }
}