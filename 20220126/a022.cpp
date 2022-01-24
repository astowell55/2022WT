#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string o;
    cin >> s;
    o = s;
    reverse(s.begin(), s.end());
    if(s==o){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}