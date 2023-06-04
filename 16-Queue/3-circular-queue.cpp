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

bool enqueue(int data){

    //Queue is Full
    if( (front == 0 && rear == size-1) || (rear == (front-1) && (size-1))){
        cout<<"Queue is full"<<endl;
        return false;
    }
    //Front and Rear is at -1, so queue is empty
    else if(front == -1){
        front = rear = 0;
    }
    //Front is not at 0 that means starting indexes are empty so rear will come to 0
    else if(front != 0 && rear == size-1){
        rear = 0;
    }
    //For all other cases, like front is at 0 and rear != size-1
    //front is in middle and rear<size-1, etc
    else{
        rear++;
    }
    arr[rear] = data;
    return true;
}
int dequeue(){
    //Queue is empty, can't pop 
    if(front == -1){
        cout<<"Queue is empty"<<endl;
    }
    //Pop the element
    int ans = arr[front];
    arr[front] = -1;

    //Single element is present
    if(front == rear){
        front = rear = -1;
    }
    //Front is at last, so send it to first
    //To Maintain cyclic order
    else if(front == size-1){
        front = 0;
    }
    //For all other cases, when front != 0 || -1 || size-1 
    else{
        front++;
    }
    return ans;
}

};


int main(){

Queue q(5);

q.enqueue(5);
q.enqueue(10);
q.enqueue(15);
q.enqueue(20);
q.enqueue(25);

cout<<q.dequeue()<<endl;

    return 0;
}