#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v{4,21,5,3,2,7,4,32,8};
    vector<int> a;
    for(auto& i:v){
        a.push_back(0);
    }
    int k = 3;


    for(int i=0; i<v.size(); i++){
        int index = (i+k)%(v.size());
        a[index] = v[i];
    }



    for(auto& i : a){
        cout<<i<<"-";
    }

    return 0;
}