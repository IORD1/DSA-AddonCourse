#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findSAndL(vector<int> v){
    int small = INT_MAX;
    int large = INT_MIN;
    for(auto& i:v ){
        if(i < small){
            small = i;
        }
        if(i > large){
            large = i;
        }
    }

    cout<<"---------------"<<endl;
    cout<<"S : "<<small<<" | L : "<<large<<endl;
}

int main(){

    findSAndL({5, 2, 9, 1, 7});
    findSAndL({10, 3, 6, 8, 2, 1});
    findSAndL({15, 15, 15, 15, 15});
    findSAndL({100});
    findSAndL({2, 6, 3, 9, 1, 8, 5});
    findSAndL({-10, -5, -15, -2, -20});
    findSAndL({0, 0, 0, 0, 0, 0, 0});
    findSAndL({11, 22, 33, 44, 55});
    findSAndL({9, 3, 8, 5, 6, 2, 1, 7, 4});
    findSAndL({-5, -10, -2, -20, -1, -15});


    return 0;
}