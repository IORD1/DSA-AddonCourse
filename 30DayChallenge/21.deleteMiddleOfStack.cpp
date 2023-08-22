#include<bits/stdc++.h>
using namespace std;

void deleteMiddleElement(stack<int> s,stack<int> one, stack<int> two){
    if(s.empty()){
        return;
    }
    if(!s.empty()){
        one.push(s.top());
        s.pop();
    }else{
        deleteMiddleElement(s,one,two);
    }

    if(!s.empty()){
        two.push(s.top());
        s.pop();
    }else{
        deleteMiddleElement(one,two,s);
    }

    deleteMiddleElement(s,one,two);
}

void deleteUsingCompare(stack<int> s){
    stack<int> temp;

    while(s.size() != temp.size()-1 && !s.empty()){
        temp.push(s.top());
        s.pop();
    }

    temp.pop();
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }

    cout<<endl<<"------------------------"<<endl;
    while(!s.empty()){
        cout<<s.top()<<"-";
        s.pop();
    }cout<<endl;
}


int main(){
    stack<int> s;
    for(int i=0; i<5; i++){
        s.push(i+1);
    }
    deleteUsingCompare(s);
}