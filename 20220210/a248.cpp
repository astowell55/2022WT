#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long a, b, n;
    string s;
    string len;
    while(cin >> a >> b >> n){
        cout << a / b;
        cout << ".";
        a %= b;
        a *= 10;
        for (int i = 0; i < n;i++){
            cout << a / b;
            a %= b;
            a *= 10;
        }
        cout << "\n";
    }
}