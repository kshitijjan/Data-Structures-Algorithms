#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<int> q;

q.push(1);
q.push(2);
q.push(3);

cout<<"Front of q is: "<<q.front()<<endl;
cout<<"Rear of q is: "<<q.back()<<endl; 
cout<<"Size of queue is: "<<q.size()<<endl;
q.pop();
cout<<"After pop, front of queue is: "<<q.front()<<endl;
cout<<"Size of queue is: "<<q.size()<<endl;

if(q.empty()){
    cout<<"Queue is empty"<<endl;
}
else{
    cout<<"Queue is not empty"<<endl;
}
    return 0;
}