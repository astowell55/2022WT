#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int num;
    vector<int> v;
    while(cin >> n){
        for (int i = 0; i < n;i++){
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
        v.clear();
        
    }
}