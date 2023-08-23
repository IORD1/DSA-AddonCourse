#include<bits/stdc++.h>
using namespace std;

void reverseFirstKElements(queue<int> q,int k){
    vector<int> v;
    vector<int> reversed;

    for(int i=0; i<k; i++){
        reversed.push_back(q.front());
        q.pop();
    }

    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }

    reverse(reversed.begin(), reversed.end());
    for(auto& i:reversed){
        q.push(i);
    }
    for(auto& i:v){
        q.push(i);
    }

    cout<<"-------------"<<endl;
    while(!q.empty()){
        cout<<q.front()<<"-";
        q.pop();
    }cout<<endl;
}


int main(){

    queue<int> q;
    for(int i=0; i<5; i++){
        q.push(i+1);
    }

    reverseFirstKElements(q,3);
}