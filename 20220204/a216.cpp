#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll num){
    return (1 + num) * num / 2;
}
ll g(ll num){
    if(num == 1){
        return 1;
    }
    return f(num) + g(num - 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll num;
    while(cin >> num){
        cout << f(num) <<" "<<g(num)<<"\n";
    }
}