#include <bits/stdc++.h>
using namespace std;

void nonRepeatingChar(string s){
    for(int i=0; i<s.size()-1; i++){
        int flag = 0;
        for(int j=i+1; j<s.size(); j++){
            
            if(s[i] == s[j]){
                flag = 1;
                break;
            }
        }

        if(!flag){
            cout<<"----------------------"<<endl<<"Found First Non reapting Char : "<<s[i]<<endl;
            break;
        }
    }
}


int main(){
    nonRepeatingChar("prathampr");
}
