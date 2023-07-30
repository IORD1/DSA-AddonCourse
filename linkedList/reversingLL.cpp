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


void display(Node* &head){
    Node* t = head;

    while(t != NULL){
        cout<<t->data<<"-";
        t = t->next;
    }cout<<"NULL"<<endl;
}

void reverseit(Node* &head){
    // NULL   1->3->4->5->NULL

    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    display(head);
}


void insertLast(Node* &head, int val){
    Node* r = new Node(val);

    if(head == NULL){
        head = r;
        return;
    }

    Node* t = head;

    while(t->next != NULL){
        t = t->next;
    }
    t->next = r;
}
int main(){
    Node* head = NULL;
    insertLast(head,5);
    insertLast(head,7);
    display(head);
    reverseit(head);
    return 0;
}