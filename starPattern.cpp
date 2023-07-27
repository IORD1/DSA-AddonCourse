#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int k= 5;
    for(int i=0; i<k; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    return 0;
}