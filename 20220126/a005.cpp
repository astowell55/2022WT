#include <bits/stdc++.h>
using namespace std;
void nlist(int num[]){
    int d1;
    int d2;
    d1 = num[3] - num[2];
    d2 = num[2] - num[1];
    cout << num[0]<<" " << num[1] <<" "<< num[2] <<" "<< num[3]<<" ";
    if(d1 != d2){
         d1 = num[3] / num[2];
         cout << num[3] * d1<<endl;
    }else 
        cout << num[3] + d1<<endl;
}   
int main(){
    int n;
    int num[5];
    cin >> n;
    while(n--){
        cin >> num[0] >> num[1] >> num[2] >> num[3];
        nlist(num);
    }
}