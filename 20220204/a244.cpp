#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--){
        ll a, b;
        int op;
        cin >> op >> a >> b;
        switch(op){
            case 1:
                cout << a + b;
                break;
            case 2:
                cout << a - b ;
                break;
            case 3:
                cout << a * b;
                break;
            case 4:
                cout << a / b;
                break;
        }
        cout << "\n";
    }
}