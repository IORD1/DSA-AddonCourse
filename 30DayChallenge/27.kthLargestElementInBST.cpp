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
        right =NULL;
    }
};

void kthLargestValue(node* root,int k){
    node* curr = root;
    node* knode = NULL;
    int count = 0;

    while(curr != NULL){
        if(curr->right == NULL){
            if(++count == k){
                knode = curr;
            }
            curr = curr->left;
        }else{
            node* succ = curr->right;
 
            while (succ->left != NULL && succ->left != curr)
                succ = succ->left;
 
            if (succ->left == NULL) {
                succ->left = curr;
                curr = curr->right;
            }
            else {
 
                succ->left = NULL;
 
                if (++count == k)
                    knode = curr;
                 curr = curr->left;
            }
        }
    }

    cout<<endl<<"----------------"<<endl<<knode->data<<endl;
}


int main(){

    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);


    kthLargestValue(root,2);

}