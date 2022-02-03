#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    int score = 0;
    cin >> num;
    while(num > 0){
        if(num >= 40){
            score = 100;
            num = 0;
        }else if(num <40 &&num > 20){
            score += ((num - 20) * 1);
            num = 20;
        }
        else if (num <= 20 &&num > 10){
            score += ((num - 10) * 2);
            num = 10;
        }else if(num <= 10){
            score += (num * 6);
            num = 0;
        }
    }
    cout << score << "\n";
}