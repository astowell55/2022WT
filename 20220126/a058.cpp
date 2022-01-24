#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[3] ={0};
    cin >> n;
    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        if(num%3 == 0){
            arr[0]++;
        }else if(num%3==1){
            arr[1]++;
        }else if(num%3==2){
            arr[2]++;
        }
    }
    cout << arr[0]<<" "<< arr[1]<<" " << arr[2];
}