#include <bits/stdc++.h>
using namespace std;
int sum(int num){
    return(num * (1 + num) / 2 );
}
int main(){
    int num;
    while(cin >> num){
        cout << 2 * sum(num -1) + 2 << endl;
    }
}