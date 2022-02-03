#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll min, max;
    while(cin >> min >> max){
        ll sum = min;
        int i = 1;
        while(sum <= max){
            sum += (min + i);
            i++;
        }
        cout << i << "\n";
    }
}
