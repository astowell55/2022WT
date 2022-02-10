#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> s(4, 0);
    vector<int>l(4, 0);
    while (cin >> s[0] >> s[1] >> s[2] >> s[3]){
        int n;
        int a, b;
        vector<int> v(10, 0);
        vector<int> v2(10, 0);
        cin >> n;
        while(n--){
            a = 0;
            b = 0;
            l.clear();
            cin >> l[0] >> l[1] >> l[2] >> l[3];
            for (int i = 0; i < 4;i++){
                if(s[i] == l[i]){
                    a++;
                }
                v[s[i]]++;
                v2[l[i]]++;
            }
            for (int i = 0; i < 10; i++){
                if(v[i]!=0&&v2[i]!=0){
                    b += min(v[i], v2[i]);
                }
            }
            b -= a;
            if(b<0){
                b = 0;
            }
            cout << a << "A" << b << "B\n";
            fill(v.begin(), v.end(), 0);
            fill(v2.begin(), v2.end(), 0);
            
        }
    }
}