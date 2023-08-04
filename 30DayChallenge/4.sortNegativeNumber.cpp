#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void negativeNumberAsside(vector<int> v){
    int start = 0;
    int end = v.size()-1;
    while(end > start){
        // cout<<": "<<end<<endl;
        if(v[end] < 0 && v[start] >= 0){
            // cout<<"swapping"<<v[end]<<"-"<<v[start]<<endl;
            swap(v[end],v[start]);
            end--;
            start++;
        }else if(v[end] <0 && v[start] < 0){
            end--;
        }else if(v[end] >= 0 && v[start] < 0){
            end--;
            start++;
        }else if(v[end] >= 0 && v[start] >= 0){
            end--;
        }

    }
    cout<<"------------"<<endl;
    for(auto& i: v){
        cout<<i<<" , ";
    }cout<<endl;
}


int main(){

    negativeNumberAsside({1, -2, 3, -4, 5, -6});
    negativeNumberAsside({10, -5, 7, -3, 0, -8});
    negativeNumberAsside({2, 4, -6, 8, -10});
    negativeNumberAsside({1, 2, 3, -4, -5, -6});
    negativeNumberAsside({7, -9, 2, -6, 0, -1});
    negativeNumberAsside({3, -7, 2, -8, 5, -4});
    negativeNumberAsside({-1, -2, -3, -4, -5});
    negativeNumberAsside({6, 4, 3, 0, -2, -7, -9});
    negativeNumberAsside({1, 2, 3, 4, 5});
    negativeNumberAsside({0, 0, 0, -1, -2, -3});


    return 0;
}
