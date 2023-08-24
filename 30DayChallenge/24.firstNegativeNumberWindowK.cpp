#include<bits/stdc++.h>
using namespace std;

void firstNegaiveNumberWindowK(vector<int> v, int win){
    vector<int> ans;
    for(int i=0; i<v.size()-win+1; i++){
        int mini = 0;
        for(int j=i; j<(i+win); j++){
            mini = min(mini, v[j]);
        }
        ans.push_back(mini);
    }

    cout<<"-------------"<<endl;
    for(auto& i:ans){
        cout<<i<<' ';
    }
}

int main(){
    firstNegaiveNumberWindowK({-8,2,3,-6,10},2);
}