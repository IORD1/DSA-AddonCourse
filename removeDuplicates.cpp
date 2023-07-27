#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<string> v{"word","apple","banana","apple","word","ball"};
    int total = 0;
    for(int i=0;i<v.size()-1; i++){
        string s = v[i];
        for(int j=i+1; j<v.size(); j++){
            if(s == v[j]){
                total++;
            }
        }
    }

    cout<<"Total duplicates :"<<total<<endl;

    cout<<"Removing duplicates"<<endl;
    int i=0;
    int j=i+1;

    while(i<v.size()){
        string word = v[i];
        while(j<v.size()){
            if(word == v[j]){
                cout<<"removing: "<<v[j]<<endl;
                v.erase(v.begin()+j);

                j--;
            }
            j++;
        }

        
        i++;
        j=i+1;
    }


    cout<<"Array after removing duplicates:"<<endl;
    for(auto& i : v){
        cout<<i<<endl;
    }   


    cout<<"Using Set to remove duplicates"<<endl;

    vector<string> v1{"word","apple","banana","apple","word","ball"};

    set<string> s(v1.begin(), v1.end());
    


    for(auto& k :s){
        cout<<k<<"-";
    }


    return 0;
}