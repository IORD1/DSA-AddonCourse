#include<bits/stdc++.h>
using namespace std;


void reverseIt(string s, string ans){
    if(s.length() == 0){
        cout<<"-------------"<<endl<<"Reversed it : "<<ans<<endl;
        return;
    }
    ans = ans+ s[s.length() - 1];
    s.resize(s.size() - 1);
    reverseIt(s, ans);
}

int main(){
    reverseIt("ABCDE", "");
}