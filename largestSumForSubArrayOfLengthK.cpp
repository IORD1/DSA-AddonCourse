#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Subarray with Maximum Sum: Find the contiguous subarray for given len. with the largest sum in an
// array.
int main()
{
    // Prints hello world
    cout << "----------------------"<<endl;
    vector<int> v{3,1,6,3,8,-3,6,7,3};
    int start,end;
    int sum = 0;
    int maxsum = -99;
    int len = 3;
    for(int i=0; i<v.size()-len; i++){
        for(int j=i; j<(i+len); j++){
            sum+= v[j];
        }

        if(sum > maxsum){
            start = i;
            end = i+len-1;
            maxsum = sum;
        }
        sum = 0;

    }

    cout<<v[start]<<"("<<start<<"-"<<v[end]<<"("<<end<<endl;
    cout<<maxsum<<endl;
    return 0;
}


