#include<bits/stdc++.h>
using namespace std;

void checkBracketValidity(string s){
    stack<char> t;
    for(auto& i:s){
        if(i == '{' || i == '(' || i == '['){
            t.push(i);
        }
        if(!t.empty()){
            if(i == '}'){
            if(t.top() == '{'){
                t.pop();
            }else{
                cout<<"Invalid"<<endl;
                return;

            }
        }else if(i == ')'){
            if(t.top() == '('){
                t.pop();
            }else{
                cout<<"Invalid)"<<endl;
                return;
            }
            t.pop();
        }else if(i == ']'){
            if(t.top() == '['){
                 t.pop();
            }else{
                cout<<"Invalid"<<endl;
                return;
            }
        }
        }
    }

    if(t.empty()){
        cout<<"Valid"<<endl;
    }else{
        cout<<"Invalid"<<endl;
    }
}


int main(){
    checkBracketValidity("{{{()}}}[");
}