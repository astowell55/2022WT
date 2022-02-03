#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    ll sum = 0;
    cin >> n;
    for (int i = 1; i <= n;i++){
        ll num;
        cin >> num;
        sum += num * i;
    }
    cout << sum << "\n";
}