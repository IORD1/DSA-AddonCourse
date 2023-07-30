#include<iostream>
using namespace std;

class Node{

public:
int data;
Node *next;

Node(int val){
    data = val;
    next = NULL;
}

};

void display(Node* head){
    Node* k = head;
    while(k != NULL){
        cout<<k->data<<"-";
        k = k->next;
    }cout<<"-NULL"<<endl;
}


void insertTail(Node* &head, int val){
    Node* k = new Node(val);
    if(head == NULL){
        head = k;
        return;
    }

    Node* t = head;

    while(t->next != NULL){
        t = t->next;

    }
    t->next = k;
}

int main(){
    Node* head = NULL;
    insertTail(head,4);
    insertTail(head,5);
    insertTail(head,7);
    display(head);


    return 0;
}