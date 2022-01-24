#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    vector<char> v;
    while((c =getchar() )!=EOF){
        c -= 7;
        v.push_back(c);
    }
    for(auto i : v ){
        cout<<i;
    }
    cout << endl;
}