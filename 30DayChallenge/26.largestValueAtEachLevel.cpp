#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void check(vector<int>& res, node* root, int d){
    if(root == NULL){
        return;
    }

    if(d == res.size()){
        res.push_back(root->data);
    }else{
        res[d] = max(res[d], root->data);
    }

    check(res, root->left, d + 1);
    check(res, root->right, d + 1);
}

void returnLargestAtEachLevel(node* root){

    vector<int> ans;

    check(ans,root,0);

    for(auto& i:ans){
        cout<<i<<endl;
    }

}

int main(){
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    returnLargestAtEachLevel(root);

}