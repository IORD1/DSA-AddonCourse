#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "asdfojadsfasdfsd";

    vector<char> c;
    vector<int> total;
    int flag = 0;
    for(int i=0; i<s.size(); i++){
        int character = s[i];
        for(int j=0; j<c.size(); j++){
            if(character == c[j]){
                total[j]++;
                flag  = 1;
            }
        }

        if(!flag){
  
            c.push_back(s[i]);
            total.push_back(1);
            
        }

        flag = 0;
    }



    for(auto& i:c){
        cout<<i<<"-";
    }cout<<endl;

    for(auto& j:total){
        cout<<j<<"-";
    }cout<<endl;
    return 0;
}