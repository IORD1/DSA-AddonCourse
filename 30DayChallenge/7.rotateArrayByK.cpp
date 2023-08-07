#include<bits/stdc++.h>
using namespace std;

void rotateIt(int k,vector<int> v){
    vector<int> a(v.size(),0);
    for(int i=0; i<v.size(); i++){
        a[(k+i)%v.size()] = v[i];
    }

    cout<<"-----------------"<<endl;
    for(auto &i:a) cout<<i<<" ";
    cout<<endl;
}


int main(){
    rotateIt(2,{1, 2, 3, 4, 5});
    rotateIt(3,{10, 20, 30, 40, 50});
    rotateIt(4,{3, 6, 9, 12, 15});
    rotateIt(1,{5, 10, 15, 20, 25, 30});
    rotateIt(7,{1, 2, 3, 4, 5, 6, 7});
    rotateIt(5,{8, 6, 4, 2, 0});
    rotateIt(0,{1, 3, 5, 7, 9});
    rotateIt(6,{1, 2, 3, 4, 5, 6});
    rotateIt(1,{2, 4, 6, 8});
    rotateIt(3,{7, 5, 3, 1});
}