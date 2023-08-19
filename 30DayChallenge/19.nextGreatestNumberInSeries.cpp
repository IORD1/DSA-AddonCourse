#include<bits/stdc++.h>
using namespace std;


void nextGreatestNumberinSeries(vector<int> a){
    vector<int> v;

    for(int i=0; i<a.size()-1; i++){
        int flag = 1;
        for(int j=i+1; j<a.size();j++){
            if(a[j] > a[i]){
                v.push_back(a[j]);
                flag = 0;
                break;
            }
        }

        if(flag) v.push_back(-1);

    }

    v.push_back(-1);
    cout<<endl<<"-------------"<<endl;
    for(auto k: v){
        cout<<k<<" ";
    }
}


int main(){
    nextGreatestNumberinSeries({4,5,2,10});
    nextGreatestNumberinSeries({3,8,4,1,2});
    nextGreatestNumberinSeries({1,2,3,4,5});
    nextGreatestNumberinSeries({5,4,3,2,1});
    nextGreatestNumberinSeries({10,7,8,6,9});
    nextGreatestNumberinSeries({1,1,1,1,1});
    nextGreatestNumberinSeries({5,10,3,7,4});
    nextGreatestNumberinSeries({9,6,2,3,5,8});
    nextGreatestNumberinSeries({12,14,10,15,11});
    nextGreatestNumberinSeries({100,90,110,95});
}


