#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> v{4,2,6,6,3,2,5,6,7};

    for(int i=1; i<v.size(); i++){
        for(int j=0;j<i-1; j++){
            if(v[i] < v[j]){
                swap(v[i],v[j]);
            }
        }
    }

    for(auto& i: v){
        cout<<i<<"-";
    }


    return 0;
}