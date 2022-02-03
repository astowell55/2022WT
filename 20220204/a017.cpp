#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int priority(string a){
    if (a == "*" || a == "/" || a == "%"){
        return 2;
    }
    else if (a == "+" || a == "-"){
        return 1;
    }else if(a == "("){
        return 0;
    }
    return - 1;
}
void to_postfix(vector<string> &v){
    vector<string> p;
    stack<string> st;
    for (int i = 0; i < v.size();i++){
        if(v[i] == "("){
            st.push(v[i]);
        }else if (v[i] == ")"){
            while(!st.empty()){
                if(st.top()!="(")
                    p.push_back(st.top());
                else{
                    st.pop();
                    break;
                }
                st.pop();
            }
        }else if (v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/" || v[i] == "%"){
            while(!st.empty()&&priority(st.top())>=priority(v[i])){
                p.push_back(st.top());
                st.pop();
            }
            st.push(v[i]);
        }else{
            p.push_back(v[i]);
        }
    }
    while(!st.empty()){
        if(st.top()!="(")
            p.push_back(st.top());
        st.pop();
    }
    v.assign(p.begin(), p.end());
}
string calculate(string a, string b, string op){
    ll NUMa = stoll(a);
    ll NUMb = stoll(b);
    stringstream ss;
    ss.str("");
    ss.clear();
    ll result;
    string r;
    if(op == "+"){
        result = (NUMa + NUMb);
    }else if(op == "-"){
        result = (NUMa - NUMb);
    }else if(op == "*"){
        result = (NUMa * NUMb);
    }else if(op == "/"){
        result = (NUMa / NUMb);
    }else if(op == "%"){
        result = (NUMa % NUMb);
    }
    ss << result;
    ss >> r;
    return r;
}
void eval(vector<string> v){
    int i = 0;
    for (i; i < v.size() ;i++){
        auto it = v.begin();
        if(v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/" || v[i] == "%"){
            v[i-2] = calculate(v[i - 2], v[i - 1], v[i]);
            v.erase(it + i -1, it + i+1);
            i -= 2;
        }   
    }
    for(auto  i: v){
        cout << i ;
    }
    cout << "\n";   
}
int main(){
    string line;
    string temp;
    stringstream ss;
    vector<string> v;
    while(getline(cin, line)){
        ss << line;
        while(ss >> temp){
            v.push_back(temp);
        }
        to_postfix(v);
        eval(v);
        line.clear();
        temp.clear();
        ss.str("");
        ss.clear();
        v.clear();
    }
}