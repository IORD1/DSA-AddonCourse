#include<iostream>
using namespace std;

#define n 10

class queue{
    int * arr;
    int front;
    int back;
public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){
        if(back == n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front == -1 || front > back){
            cout<<"Queue Empty"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front>back){
            cout<<"Queue EMpty"<<endl;
            return -1;
        }
        return arr[back];
    }

    bool isEmpty(){
        if(front == -1 ||front > back){
            return true ;
        }
        return false;
    }
};