#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
void push(int num){
    if(size-top>1){
        top++;
        arr[top] = num;
    }
}
void pop(){
    if(top>=0){
        top--;
    }
}
void solve(Stack* s, int count, int size){

    if(count == size/2){
        s->pop();
        return;
    }

    int num = s->top();
    s->pop();

    solve(s, count++, size);

    s->push(num);

}
void deleteMid(Stack* s, int size){

    int count = 0;
    solve(s, count, size);
}

};

int main(){

Stack s(6);
int num;
for(int i=0; i<6; i++){
    cin>>num;
    s.push(num);
}
s.deleteMid(s, 6);

    return 0;
}