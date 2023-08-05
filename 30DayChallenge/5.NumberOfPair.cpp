#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void returnNumberOfSum(int k , vector<int> v){
    int total = 0;
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(k == v[i] + v[j]){
                total++;
            }
        }
    }

    cout<<"---------------"<<endl;
    cout<<"Number of Pairs : "<<total<<endl;
}

int main(){

returnNumberOfSum(6,{1,2,3,4,5});
returnNumberOfSum(5,{3,1,4,2,5});
returnNumberOfSum(4,{2,2,2,2,2});

returnNumberOfSum(60,{10, 20, 30, 40, 50});

returnNumberOfSum(10,{1, 3, 5, 7, 9});

returnNumberOfSum(0,{0, 0, 0, 0, 0});

returnNumberOfSum(25,{5, 10, 15, 20});

returnNumberOfSum(9,{1, 2, 3, 4, 5});

returnNumberOfSum(10,{9, 4, 6, 3, 2, 1});

returnNumberOfSum(35,{5, 15, 20, 25, 30});



    return 0;
}