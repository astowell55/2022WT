#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if(b == 0){
        return a;
    }
    return GCD(b, a % b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    while (cin >> a >> b){
        cout << GCD(a, b)<< "\n";
    }
}