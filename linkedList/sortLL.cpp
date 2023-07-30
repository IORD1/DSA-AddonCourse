#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

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

void insertIt(Node* &head, int val){
    Node* r = new Node(val);
    if(head == NULL){
        head  = r;
        return;
    }
    Node* t = head;

    while(t->next != NULL){
        t = t->next;
    }
    t->next = r;
}

void reverseit(Node* &head){
    Node* prev = NULL;
    Node* next = NULL;
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

void swapit(Node* &first, Node* &second,Node* head){
    Node* t = first->next;
    Node* g = head;
    Node* h = head;

    while(g->next != first){
        g = g->next;
    }
    while(h->next != second){
        h = h->next;
    }


    g->next = second;
    h->next = first;
    first->next = second->next;
    second->next = t;


}

void sortit(Node* &head){
    if(head == NULL){
        cout<<"ll does not exists"<<endl;
        return ;
    }


    Node* i = head;
    Node* t = i->next;
    while(i->next != NULL){
        while(t != NULL){
            if(i->data > t->data){
                swap(i->data,t->data);
            }
            t = t->next;
        }

        i = i->next;
        t = i->next;
    }
}





int main(){
    Node* head = NULL;
    insertIt(head,1);
    insertIt(head,22);
    insertIt(head,3);
    insertIt(head,42);
    insertIt(head,534);
    insertIt(head,6);
    insertIt(head,17);
    display(head);
    Node* first = head->next; //2
    Node* second = head->next->next->next->next; //5
    swapit(first,second,head);
    display(head);
    sortit(head);
    display(head);
    return 0;
}