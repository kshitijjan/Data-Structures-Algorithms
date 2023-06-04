#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

bool push_front(int data){

    if((front == 0 && rear == size-1) || (rear = (front-1)%(size-1))){
        cout<<"Queue is full"<<endl;
        return false;
    }
    else if(front == -1){
        front = rear = 0;
    }
    else if(front == 0 && rear != size-1){
        front = size-1;
    }
    else{
        front--;
    }
    arr[front] = data;
    return true;
}
bool push_rear(int data){
    if((front == 0 && rear = size-1) || (rear = (front-1)%(size-1))){

        cout<<"Queue is full"<<endl;
        return true;
    }
    else if(front == -1){
        front = rear = 0;
    }
    else if(front != 0 && rear == size-1){
        rear = 0;
    }
    else{
        rear++;
    }
    arr[rear] = data;
    return true;
}
int pop_front(){

    if(front == -1){
        cout<<"Queue is empty"<<endl;
    }
    int ans = arr[front];
    arr[front] = -1;
    if(front == rear){
        front = rear = -1;
    }
    else if(front == size-1){
        front = 0;
    }
    else{
        front++;
    }
    return ans;
}
int pop_rear(){

    if(front == -1){
        cout<<"Queue is empty"<<endl;
    }
    int ans = arr[rear];
    arr[rear] = -1;

    else if(front == rear){
        front = rear = -1;
    }
    else if(rear == 0){
        rear = size-1;
    }
    
    else{
        rear--;
    }
    return ans;
}

};

int main(){



    return 0;
}