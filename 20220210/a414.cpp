#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n && n != 0){
        int i = 0;
        while(n%2!= 0){
            i++;
            n /= 2;
        }
        cout << i << "\n";
    }
}