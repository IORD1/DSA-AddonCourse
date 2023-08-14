#include<bits/stdc++.h>
using namespace std;


void possibleSubarray(string s, int k){
    int total = 0;
    cout<<"---------------------"<<endl;
    if(k <= s.size()){
        for(int i=0; i<=s.size()-k; i++){
            for(int j = i; j<i+k; j++){
                cout<<s[j];
            }cout<<" , ";
            total++;
        }
    }

    cout<<endl<<"---------------------"<<endl<<"Total possible subarray : "<<total<<endl;
}

int main(){
    possibleSubarray("abasdffc",3);
}