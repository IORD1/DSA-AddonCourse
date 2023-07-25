#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Prints hello world
    cout << "----------------------"<<endl;
    vector<int> v{4,1,6,3,9,6,8};
    v.push_back(1);
    int mini = 9999;
    int jumpter = 1;
    for(int i=0; i<v.size()-1; i++){

        for(int j=i+1; j<v.size();j++){
            if(mini > v[j]){
                jumpter = j;
                mini = v[j];
            }
        }

        int temp = v[i];
        v[i] = mini;
        v[jumpter] = temp;
        mini = 9999;

    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"-";
    }


    return 0;
}

