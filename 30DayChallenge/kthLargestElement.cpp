#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthLargest(int val,vector<int> v){
    sort(v.begin(),v.end());
    return v[(v.size()-val)];
}


int main(){
    vector<int> v{2,4,1,5,8,6,33,2,312,34,76};
    cout<<"----------------"<<endl;
    for(auto& i : v){
        cout<<i<<"-";
    }cout<<endl;

    cout<<"Kth largest element is : "<<kthLargest(3,v)<<endl;
    return 0;
}