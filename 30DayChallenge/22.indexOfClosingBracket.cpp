#include<bits/stdc++.h>
using namespace std;

void findClosingBracket(string s,int index){
    stack<int> temp;
    int counter = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '[' && i > index){
           counter++;
            // temp.push(s[i]);
        }else if(s[i] == ']' && i > index){
            // temp.pop()
            if(counter == 0){
                cout<<"---------------"<<endl<<"index : "<<i<<endl;
                return;
            }
            counter--;

        }
    }
}

int main(){
    findClosingBracket("[ABC[23]][89]",0);
    findClosingBracket("[ABC[23]][89]",4);
    findClosingBracket("[ABC[23]][89]",9);
}