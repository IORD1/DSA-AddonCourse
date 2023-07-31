
#include<iostream>
using namespace std;

#define n 10

class stack{
int *arr;
int top;
public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout<<"stack empty"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }
};