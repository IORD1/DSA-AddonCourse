#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{2,3,5,5,5,7,8,8,9};
    int target = 5;
    int total=0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == target){total++;}else if(v[i] > target){break;}
    }
    cout<<" number : "<<target<<" is occuring : "<<total<<" times"<<endl;
    return 0;
}