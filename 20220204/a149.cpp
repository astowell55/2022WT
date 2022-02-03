#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num;
    string s;
    cin >> num;
    while(num--){
        s.clear();
        ll sum = 1;
        cin >> s;
        for(auto i:s){
            sum *= (i - '0');
        }
        cout << sum << "\n";
    }
}