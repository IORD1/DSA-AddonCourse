#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "thisisasentence";
    string subs = "isa";
    string replceit = "isnota";
    int flag = 0;
    int start = 0;
    int end = start+subs.size();
    int i=0;
    int j=0;
    while(i < s.size()-1){
        
        while(j < subs.size()-1){
            if(s[i] == subs[j]){
                i++;
                j++;
                flag++;
                if(flag == subs.size()-1){
                    cout<<i<<"-"<<(i+subs.size())<<endl;
                    start = i;
                    end = i+subs.size();
                    cout<<"Substring exists"<<endl;
                }
            }else{
                flag = 0;
                j=0;
                break;
            }

        }
        i++;
    }
   

   if(!flag){
    cout<<"Substring not found"<<endl;
   }


   cout<<"replacing"<<endl;
   int counter=0;
    

   cout<<s<<endl;
    return 0;
}