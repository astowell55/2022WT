#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num;
    double sum = 0;
    while(cin >> num){
        sum = 0;
        for (int i = 0; i < num;i++){
        int grade;
        cin >> grade;
        sum += grade;
        }
        sum /= num;
        if(sum > 59){
            cout << "no\n";
        }else{
            cout << "yes\n";
        }
    }
    
    
}