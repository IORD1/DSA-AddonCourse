#include<bits/stdc++.h>
using namespace std;


void checkNthRootOfM(int n, int m){
    // n = 27, m = 3
    int a = 1;
    while(pow(a,m)  <= n){
        if(pow(a,m) == n){
            cout<<"------------"<<endl<<a<<endl;
            return;
        }
        a++;
    }
    cout<<"------------"<<endl<<"-1"<<endl;

}


int main(){
    checkNthRootOfM(27,3);
    checkNthRootOfM(64,3);
    checkNthRootOfM(16,3);
    checkNthRootOfM(4,2);
    checkNthRootOfM(879,3);
    checkNthRootOfM(175616,3);
    checkNthRootOfM(12323424,56);
}