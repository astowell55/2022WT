#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    int value;
    while(cin >> r >> c){
        int arr[c][r];
        for (int i = 0; i < r;i++){
            for (int j = 0; j < c;j++){
                cin >> arr[j][i];
            }
        }
        for (int j = 0; j < c;j++){
            for (int i = 0; i < r;i++){
                cout <<arr[j][i]<<" ";
            }
            cout << 'A';
    }

    }
}