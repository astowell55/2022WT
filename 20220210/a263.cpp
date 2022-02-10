#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count_time(int year,int month,int day){
    tm info ={0};
    info.tm_year = year - 1900;
    info.tm_mon = month - 1;
    info.tm_mday = day;
    return mktime(&info) / 86400;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int y1, m1, d1;
    int y2, m2, d2;
    while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2){
        cout << abs(count_time(y1, m1, d1) - count_time(y2, m2, d2)) << "\n";
    }
        
}