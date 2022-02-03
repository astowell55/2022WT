#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t;i++){
        int sum = 0;
        int min, max;
        cin >> min >> max;
        for (int i = 1; i * i <= max;i++){
            if(i*i>= min){
                sum += i * i;
            }
        }
        cout << "Case " << i << ": " << sum << "\n";
    }
}