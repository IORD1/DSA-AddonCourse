// Given an array arr[] of non-negative integers and an integer sum, 
// find a subarray that adds to a given sum. 
// There may be more than one subarray with sum as the given sum, 
// print first such subarray.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void sumOfSubarray(vector<int> v, int sum){
    int total = 0;
    vector<int> ans;
    sort(v.begin(), v.end());
    for(auto& k: v){
        cout<<k<<"-";
    }
    cout<<endl;
    for(int i=v.size()-1; i>=0; i--){
        for(int j=i; j>=0; j--){
            // cout<<total<<"+"<<v[j]<<": "<<total+v[j]<<endl;
            total += v[j];
            ans.push_back(v[j]);

            if(total > sum){
                total -= v[j];
                ans.pop_back();
            }else if(total == sum){
                cout<<"----"<<endl;
                for(auto& ri: ans){
                    cout<<ri<<"-";
                }cout<<endl;
                cout<<"------------------"<<endl;

                return ;            }
        }
        ans.clear();
        total = 0;
    }
cout<<"------------------"<<endl;
cout<<"No subarray possible"<<endl;
cout<<"------------------"<<endl;

return;

}


void sumOfSubarray2(vector<int> v, int sum){
    int total = 0;
    vector<int> ans;
    for(int i=0; i<v.size()-1; i++){
        total += v[i];
        ans.push_back(v[i]);
        for(int j=i+1; j<v.size(); j++){
            if(total >= sum){
                break;
            }
            total += v[j];
            ans.push_back(v[j]);
            if(total == sum){
                cout<<"-------------"<<endl;
                for(auto& k: ans){
                    cout<<k<<"-";
                }cout<<endl;
                return;
                break;

            }
        }

        ans.clear();
        total = 0;

    }
    cout<<"-------------"<<endl;
    cout<<"No subarray possible"<<endl;
return;

}

int main(){


    sumOfSubarray2({1, 4, 7, 3, 9, 8},11);
    sumOfSubarray2({3, 2, 1, 5, 6},7);
    sumOfSubarray2({2, 4, 6, 8},14);
    sumOfSubarray2({1, 2, 3, 4, 5},7);
    sumOfSubarray2({10, 5, 2, 6, 8},12);
    sumOfSubarray2({1, 2, 3, 4, 5},15);
    sumOfSubarray2({5, 10, 20, 30, 40},100);
    sumOfSubarray2({1, 2, 3, 4, 5},6);
    sumOfSubarray2({8, 7, 15, 6, 10},17);
    sumOfSubarray2({1, 1, 1, 1, 1},3);



    return 0;
}