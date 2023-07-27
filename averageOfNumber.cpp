#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v{4,21,5,3,2,7,4,32,8};

    int average = 0;

    

    for(auto& i:v){
        average += i;
    }

    cout<<"Average : "<<average/v.size()<<endl;
    return 0;
}