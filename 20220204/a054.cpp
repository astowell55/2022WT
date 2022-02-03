#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> m = {
        {'A', 10},
        {'B', 11},
        {'C', 12},
        {'D', 13},
        {'E', 14},
        {'F', 15},
        {'G', 16},
        {'H', 17},
        {'I', 34},
        {'J', 18},
        {'K', 19},
        {'L', 20},
        {'M', 21},
        {'N', 22},
        {'O', 35},
        {'P', 23},
        {'Q', 24},
        {'R', 25},
        {'S', 26},
        {'T', 27},
        {'U', 28},
        {'V', 29},
        {'W', 32},
        {'X', 30},
        {'Y', 31},
        {'Z', 33}
    };
    string id;
    cin >> id;
    int c = id[8] - '0';
    int sum = 0;
    for (int i = 8; i >= 1;i--){
        sum += (id[8 - i]-'0') * i;
    }
    for(auto i : m){
        int test = (10 - (sum + (9 * (i.second % 10) + (i.second / 10))) % 10) % 10;
        if (test == c){
            cout << i.first;
        }
    }
    
}
