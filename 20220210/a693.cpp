#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    long long total = 0;
    vector<int> v;
    vector<long long> sum;
    while(cin >> n >> m){
        while(n--){
            int num;
            cin >> num;
            v.push_back(num);
        }
        sum.push_back(0);
        for (int i = 0; i < v.size();i++){
            total += v[i];
            sum.push_back(total);
        }
        while(m--){
            int b, e;
            cin >> b >> e;
            cout << sum[e] - sum[b - 1] << "\n";
        }
        v.clear();
        sum.clear();
        total = 0;
    }
}
