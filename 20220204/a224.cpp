#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string o;
    string s;
    map<char,int> m;
    int odd = 0;
    while(getline(cin, o)){
        
        for(auto i: o){
        if(isalpha(i)){
            i = toupper(i);
            m[i]++;
            s += i;
        }
    }
    for(auto i: m){
        if (i.second % 2 != 0){
            odd++;
        }
    }
    
    if(s.size()%2 == 0){
        if(odd > 0){
            cout << "no...\n";
        }else{
            cout << "yes !\n";
        }
    }else{
        if(odd == 1){
            cout << "yes !\n";
        }else{
            cout << "no...\n";
        }
    }
    o.clear();
    s.clear();
    m.clear();
    odd = 0;

    }
    
  
}