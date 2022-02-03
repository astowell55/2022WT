#include <bits/stdc++.h>
using namespace std;
bool amostrong(int num){
    int temp;
    temp = num;
    long long sum =0;
    int n;
    int size;
    string siz;
    siz = to_string(num);
    size = siz.size();
    while(num>0){
        n = num % 10;
        sum = sum + pow(n,size);
        num /= 10;
    }
    if(temp == sum){
        return true;
    }
    return false;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int min, max;
    int flag = 0;
    cin >> min >> max;
    for (int i = min;i <= max;i++){
        if(amostrong(i)){
            cout << i << " ";
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "none\n";
    }
}