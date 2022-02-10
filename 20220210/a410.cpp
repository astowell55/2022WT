#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f ;
    float t = a * e - b * d;
    float tx = c * e - f * b;
    float ty = a * f - c * d;
    if(t == 0){
        if (tx == 0 && ty == 0){
            cout << "Too many\n";
        }else{
            cout << "No answer\n";
        }
    }else if(t != 0){
            cout << fixed << setprecision(2) << "x=" << tx / t << "\n";
            cout << fixed << setprecision(2) << "y=" << ty / t << "\n";
    }
}