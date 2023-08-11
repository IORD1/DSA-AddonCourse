#include<bits/stdc++.h>
using namespace std;


void reverseSentence(string s){
    vector<string> v;
    int j = 0;
    int total = 0;
    for(auto& a:s){
        if(a == ' '){
            total++;
        }
    }
    for(int i=0; i<total+1; i++){
        string temp = "";
        while(j<s.size()){
            if(s[j] == ' '){
                j++;
                break;
            }
            temp += s[j];
            j++;
            
        }
        v.push_back(temp);
    }

    string ans ;
    for(int q=v.size()-1; q>=0; q-- ){
        ans +=v[q];
        ans +=" ";
    }

    cout<<"-----------REVERSING-------"<<endl<<ans<<endl;
}

int main(){
    reverseSentence("hi there pratham");
}