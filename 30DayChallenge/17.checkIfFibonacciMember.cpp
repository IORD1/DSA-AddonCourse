#include<bits/stdc++.h>
using namespace std;

bool checkIfSquare(int x){
    int a = sqrt(x);
    return (a*a == x);
}

void checkIfMember(int x){
    int a = 5*x*x + 4;
    int b = 5*x*x - 4;

    if(checkIfSquare(a) || checkIfSquare(b)){
         cout<<"--------------"<<endl<<x<<" : True"<<endl;return;
    }

    cout<<"--------------"<<endl<<x<<" : False"<<endl;
}


int main(){
    checkIfMember(5);
    checkIfMember(8);
    checkIfMember(13);
    checkIfMember(21);
    checkIfMember(34);
    checkIfMember(1);
    checkIfMember(2);
    checkIfMember(3);
    checkIfMember(55);
    checkIfMember(89);
    checkIfMember(144);
    checkIfMember(987);
    checkIfMember(4);
    checkIfMember(6);
    checkIfMember(9);
    checkIfMember(15);
    checkIfMember(25);
    checkIfMember(7);
    checkIfMember(10);
    checkIfMember(11);
}