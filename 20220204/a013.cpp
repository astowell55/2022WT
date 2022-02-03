#include <bits/stdc++.h>
using namespace std;

void INTERGER_TO_ROME(int num){
    string s;
    vector<int> value = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> rome = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    if(num < 0){
        num *= -1;
    }
    if(num == 0){
        cout << "ZERO\n" ;
        return;
    }
    while(num>0){
        for (int i = 0; i < 13;i++){
            while(num >= value[i]){
                s += rome[i];
                num -= value[i];
            }
        }
    }
    cout << s << "\n";
}
int ROME_TO_INTERGER(string s){
    map<char, int> m = {
        {'M', 1000},
        {'D', 500},
        {'C', 100},
        {'L', 50},
        {'X', 10},
        {'V', 5},
        {'I', 1}};
    int total = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size();i++){
        char s1 = s[i];
        char s2 = s[i + 1];
        if(m[s2]<m[s1]){
            total += m[s1];
            total -= m[s2];
            i++;
        }else{
            total += m[s1];
        }
    }
    
    return total;
}
int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    string n1;
    string n2;
    int value;
    while(cin >> n1 && n1!= "#" && cin >> n2){
        value = ROME_TO_INTERGER(n1) - ROME_TO_INTERGER(n2);
        INTERGER_TO_ROME(value);
    }
}