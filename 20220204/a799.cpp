#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string o;
    stringstream ss;
    string s;
    getline(cin, o);
    ss << o;
    while(getline(ss,s,'-')){
        cout << s;
    }

}