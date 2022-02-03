#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    string p;
    stringstream ss;
    getline(cin ,s);
    for (int i = 0; i < 6;i++){
        ss << s[i] - s[i + 1];
        cout << s[i] - s[i + 1] << "\n";
    }
    while(getline(ss, p, '-')){
        cout << p;
    }
    
}