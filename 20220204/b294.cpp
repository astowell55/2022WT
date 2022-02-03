#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
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