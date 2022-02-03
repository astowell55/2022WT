#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum(ll num){
    if(num == 1){
        return 1;
    }
    return num - 1 + sum(num - 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num;
    while(cin >> num){
        cout << sum(num)<<"\n";
    }
}