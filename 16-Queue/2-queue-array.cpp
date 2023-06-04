#include<iostream>
using namespace std;

class queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    queue(){
        size = 100001;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

int enqueue(int data){
    if(rear == size){
        return -1;
    }
    else{
        arr[rear] = data;
        rear++;
    }
}
int dequeue(){
    if(front == rear){
        return -1;
    }
    else{
        int ans = arr[front];
        arr[front] = -1;
        front++;
        if(front == rear){
            front = 0;
            rear = 0;
        }
    }
}
int isEmpty(){
    if(front == rear){
        return true;
    }
    else{
        return false;
    }
}
int frontElement(){
    if(front == rear){
        return -1;
    }
    else{
        return arr[front];
    }
}
};

int main(){

queue q;
q.enqueue(11);
q.enqueue(12);
q.enqueue(13);
q.enqueue(14);

cout<<q.frontElement()<<endl;
q.dequeue();
cout<<q.frontElement()<<endl;

    return 0;
}