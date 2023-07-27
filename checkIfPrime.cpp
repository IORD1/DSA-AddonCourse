#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int a = 43;
    int d = 2;
    int flag = 0;
    for(int i=0; i<a-1; i++){
        if(a%d==0 && d != a){
            flag = 1;
            break;
        }else{
            d++;
        }

    }

    if(!flag){
        cout<<"It's prime"<<endl;
    }else{
        cout<<"It's not a prime number"<<endl;
    }
    
    return 0;
}