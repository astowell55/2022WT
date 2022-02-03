#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num;
    while(cin >> num){
        cout << 1 + num + num * (num + 1) * (num - 1) / 6 << "\n";
    }
}