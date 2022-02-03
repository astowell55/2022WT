#include <bits/stdc++.h>
using namespace std;
//哭阿1.3秒

vector<int> pt;
void primeTable(){
    pt.push_back(2);
    for (int i = 3; i <50005; i++){
        int flag = 0;
        for (int j = 2; j * j < i;j++){
            if(i % j == 0){
                flag = 1;
            }
        }
       /*for(auto j: pt){
           if(i % j ==0){
               flag = 1;
           }
       }*/
        if(!flag){
            pt.push_back(i);
        }
    }
}
bool bs(int num){
    int max = pt.size() - 1;
    int min = 0;
    while(max>=min){
        int mid = (max + min) >> 1;
        if(pt[mid] > num){
            max = mid - 1;
        }else if( pt[mid]< num){
            min = mid + 1;
        }else if(pt[mid] == num){
            return true;
        }
    }
    return false;
}


int main(){
    int x;
    primeTable();
    while(scanf(" %d",&x)!=EOF){
        if(x > 50005){
        int y = sqrt(x);
        int flag = 0;
        for (auto i : pt){
            if(i>y){
                break;
            }
            if(x % i == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("質數\n");
        }else{
            printf("非質數\n");
        }
    }
    else{
        if(bs(x)){
            printf("質數\n");
        }else{
            printf("非質數\n");
        }
    }
    }
}