#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;
    while (scanf(" %d",&year)!=EOF){
        if(year % 4 == 0 && year % 100 || year % 400 == 0)
            printf("閏年\n");
        else
            printf("平年\n");
    }
    
    
}