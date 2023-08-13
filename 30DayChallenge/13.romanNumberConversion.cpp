#include<bits/stdc++.h>
using namespace std;


void whatRoman(string s){
    int total = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'I'){
            if(i < s.size()-1 ){
                if(s[i+1] != 'I'){
                     if(s[i+1] == 'V'){
                        total += 4;
                        i++;
                    }else if(s[i+1] == 'X'){
                        total += 9;
                        i++;
                    }
                }else{
                    total++;
                }
            }else{
                total++;
            }
        }else if(s[i] == 'V'){
            total += 5;
        }else if(s[i] == 'X'){
            if(i < s.size()-1 ){
                if(s[i+1] != 'X'){
                     if(s[i+1] == 'L'){
                        total += 40;
                        i++;
                    }else if(s[i+1] == 'C'){
                        total += 90;
                        i++;
                    }
                }else{
                    total += 10;
                }
            }else{
            total += 10;
            }
        }else if(s[i] == 'L'){
            total += 50;
        }else if(s[i] == 'C'){
            if(i < s.size()-1 ){
                if(s[i+1] != 'C'){
                     if(s[i+1] == 'D'){
                        total += 400;
                        i++;
                    }else if(s[i+1] == 'M'){
                        total += 900;
                        i++;
                    }
                }else{
                    total += 100;
                }
            }else{
                total += 100;
            }
        }else if(s[i] == 'D'){
            total += 500;
        }else if(s[i] == 'M'){
            total += 1000;
        }
    }


    cout<<"---------------"<<endl<<"Roman : "<<s<<endl<<"Integer : "<<total<<endl;
}


int main(){
    whatRoman("IX");
    whatRoman("XXI");
    whatRoman("IV");
    whatRoman("XLII");
    whatRoman("XC");
    whatRoman("LXXX");
    whatRoman("CXL");
    whatRoman("CD");
    whatRoman("DCC");
    whatRoman("CM");
}