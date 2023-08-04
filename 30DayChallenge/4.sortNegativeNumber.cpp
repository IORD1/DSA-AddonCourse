#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void negativeNumberAsside(vector<int> v){
   int start = 0;
    int end = start+1;
    while(end <= v.size()-1)
    {
        if(v[start]<0 && v[end]<0)
        {
            start++;
            end++;
        }
        if(v[start]>=0 && v[end]<0)
        {
            swap(v[start], v[end]);
            start++;
            end++;
        }
        if(v[start]>=0 && v[end]>=0)
        {
            end++;
        }
        if(v[start]<0 && v[end]>=0)
        {
            start++;
            end++;
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
