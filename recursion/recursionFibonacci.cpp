#include<iostream>
using namespace std;

void fibonacci(int a,int b,int k){
    if(k < 10){
        k++;
    }else{
        return;
    }
    cout<<a+b<<"-";
    b = b+a;
    a = b-a;
    fibonacci(a,b,k);
}


int main(){

    fibonacci(0,1,1);
    return 0;
}

