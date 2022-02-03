#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int max;
    while(cin >> max&&max != 0){
        for (int i = 1; i < max;i++){
            if (i % 7){
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}