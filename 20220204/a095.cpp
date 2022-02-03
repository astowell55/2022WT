#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll max;
    ll hat;
    while(cin >> max >> hat){
        if(max > hat){
        cout << hat + 1 << "\n";
        }else{
            cout << hat << "\n";
        }  
    }
    
   
}