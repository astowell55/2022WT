#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    int d;
    map<int,int> m;
    cin >> num;
    while(num!=1){
        for (int i = 2; i <= num;i++){
            while(num % i == 0){
                m[i]++;
                num /= i;
            }
        }
    }
   
    for (const auto &[key,value] : m){
        static int i = 0;
        if(i!=0){
            cout << " * ";
        }
        i++;
        cout << key;
        if(value > 1){
            cout << "^" << value;
        }
    }
    
}
