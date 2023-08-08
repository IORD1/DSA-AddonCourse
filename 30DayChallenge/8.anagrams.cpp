#include<bits/stdc++.h>
using namespace std;

void isAnagram(string s1, string s2){
    set<char> v2;
    for(auto& i:s1){
        v2.insert(i);
    }

    for(int j=0; j<s2.size(); j++){
        int flag = 0;
        for(auto& k: v2){
            if(k == s2[j]){
                flag = 1;
                break;
            }
        }
        if(!flag){
            cout<<"-----------"<<endl<<"Not a Anagram"<<endl;
            return;
        } 
    }


    cout<<"-----------"<<endl<<"It's a Anagram"<<endl;
}

int main(){
    isAnagram("listen","silent");
}