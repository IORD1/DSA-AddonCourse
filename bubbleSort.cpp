#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v{4,21,5,3,2,7,4,32,8};

    for(int i=0; i<v.size()-1; i++){
        for(int j=0; j<v.size()-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }


    for(auto& i:v){
        cout<<i<<"-";
    }

    return 0;
}