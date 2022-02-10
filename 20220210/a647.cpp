#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        float price;
        float now;
        float rate;
        cin >> price >> now;
        rate = 100 * (now - price) / price ;
        if(rate >0){
            rate += 0.00001;
        }else if(rate < 0){
            rate -= 0.00001;
        }
        cout << fixed << setprecision(2) << rate << "% ";
        if(rate >= 10 || rate <= -7){
            cout << "dispose\n";
        }else{
            cout << "keep\n";
        }
    }
}