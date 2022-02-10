#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x, y, z, w, n, m;
        cin >> x >> y >> z >> w >> n >> m;
        int flag = 0;
        string s;
        stringstream ss;
        cin.ignore();
        getline(cin, s);
        ss.clear();
        ss.str("");
        ss << s;
        int a;
        while (ss >> a){
            m -= n * flag;
            if(m <= 0 ){
                break;
            }
            switch (a){
            case 1:
                m += x;
                break;
            case 2:
                m += y;
                break;
            case 3:
                m -= z;
                break;
            case 4:
                m -= w;
                flag++;
                break;
            }
        }
    
        if(m <= 0){
            cout << "bye~Rabbit\n";
        }else{
            cout << m << "g\n";
        }
        
        
    }
}