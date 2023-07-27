#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v{4,21,5,3,2,7,4,32,8};

    sort(v.begin(),v.end());


    cout<<"Second Largest Number : "<<v[v.size()-2]<<endl;
    return 0;
}