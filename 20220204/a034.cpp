#include <bits/stdc++.h>
using namespace std;

void INTEGER_TO_BINARY(int num){
    stack<int> st;
    while(num>0){
        st.push(num % 2);
        num /= 2;
    }
    /*for(auto i  : st){
        cout << i;
    }
    會有error?
    */
   while(!st.empty()){
       cout << st.top();
       st.pop();
   }
   cout << "\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int num;
    while(cin >> num){
        INTEGER_TO_BINARY(num);
    }
    
}