#include<bits/stdc++.h>
using namespace std;


void whatGCD(int a, int b){
    int ans = b;
    int remainder = a%b;
    if(b > a) swap(a,b);
    while(remainder != 0){
        ans = remainder;
        remainder = a%b;
        a = b;
        b = remainder;
    }
    cout<<"------------------"<<endl<<"GCD : "<<ans<<endl;
}



int main(){
    whatGCD(15,60);
    whatGCD(15,20);
    whatGCD(15,61);
    whatGCD(610,61);
    whatGCD(18928374,232);
}