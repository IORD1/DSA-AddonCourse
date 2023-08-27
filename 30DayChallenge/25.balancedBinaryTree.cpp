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

int countNode(node* root){
    if(root == NULL){
        return 0;
    }

    return countNode(root->left) + countNode(root->right) + 1;
}

int calculateHeight(node* root){
    if(root == NULL){
        return 0;
    }

    int lheight = calculateHeight(root->left);
    int rheight = calculateHeight(root->right);

    return max(lheight,rheight) + 1;
}

bool isItBalanced(node* root){
    if(root == NULL){
        return true;
    }

    if(isItBalanced(root->left) == false){
        return false;
    }

    if(isItBalanced(root->right) == false){
        return false;
    }

    int lh = calculateHeight(root->left);
    int rh = calculateHeight(root->right);

    if(abs(lh-rh) > 1){
        return false;
    }else{
        return true;
    }

}

int calculateDiameter(node* root){
    if(root == NULL){
        return 0;
    }

    int lheight = calculateHeight(root->left);
    int rheight = calculateHeight(root->right);
    int currDiameter = lheight+rheight + 1;

    int lDiameter = calculateDiameter(root->left);
    int rDiameter = calculateDiameter(root->right);

    return max(currDiameter, max(lDiameter,rDiameter));
}

int main(){

    node* root = new node(1);
    root->right = new node(3);
    root->left = new node(2);
    root->left->left = new node(5);


    cout<<countNode(root)<<endl;
    cout<<calculateHeight(root)<<endl;
    cout<<calculateDiameter(root)<<endl;
    
    if(isItBalanced(root)){
        cout<<"It's balanced"<<endl;
    }else{
        cout<<"It's not balanced"<<endl;
    }
}

