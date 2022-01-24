#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, D, S;
    scanf("%d %d", &M, &D);
    S = (M * 2 + D) % 3;
    switch(S){
        case 0:
            printf("普通");
            break;
        case 1:
            printf("吉");
            break;
        case 2:
            printf("大吉");
            break;
    }
}